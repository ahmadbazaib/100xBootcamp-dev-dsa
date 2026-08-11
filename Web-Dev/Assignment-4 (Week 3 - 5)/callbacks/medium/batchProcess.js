// Problem Description – Ordered Parallel Batcher
//
// You need to process many items in parallel, but with a fixed
// concurrency limit to avoid resource exhaustion.
//
// Tasks should start as soon as a slot is free, and the final
// results must preserve the original input order.
//
// Requirements:
// - Run at most `limit` workers in parallel.
// - Preserve the original order of results.
// - Start new work as soon as one finishes.
// - Stop and return an error if any task fails.

function batchProcess(items, limit, worker, onComplete) {
  let active = 0;
  let nextIndex = 0;
  let completed = 0;
  const results = [];
  let stopped = false;

  function startNext() {
    if (stopped) return;

    // Everything has finished
    if (completed === items.length) {
      onComplete(null, results);
      return;
    }

    // Start as many workers as the limit allows
    while (active < limit && nextIndex < items.length) {
      const index = nextIndex;
      nextIndex++;
      active++;

      worker(items[index], (err, data) => {
        active--;

        if (stopped) return;

        // Stop if this worker failed
        if (err) {
          stopped = true;
          onComplete(err);
          return;
        }

        // Store result at the original position
        results[index] = data;
        completed++;

        // A worker finished, so start another one
        startNext();
      });
    }
  }

  // Nothing to process
  if (items.length === 0) {
    onComplete(null, []);
    return;
  }

  startNext();
}

module.exports = batchProcess;
