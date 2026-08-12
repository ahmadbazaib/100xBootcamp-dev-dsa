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
  if (items.length === 0) {
    onComplete(null, []);
    return;
  }

  let active = 0;
  let nextIndex = 0;
  let result = [];
  let completed = 0;
  let stopped = false;

  function startNext() {
    if (stopped) return;

    if (completed === items.length) {
      onComplete(null, result);
      return;
    }

    while (active < limit && nextIndex < items.length) {
      const index = nextIndex;
      nextIndex++;
      active++;

      worker(items[index], (err, data) => {
        active--;

        if (stopped) return;

        if (err) {
          stopped = true;
          onComplete(err);
          return;
        }

        result[index] = data;
        completed++;

        startNext();
      });
    }
  }

  startNext();
}

module.exports = batchProcess;
