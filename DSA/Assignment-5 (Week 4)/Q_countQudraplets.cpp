#include <bits/stdc++.h>
using namespace std;

int firstNest(int A[], int n, int x){ // A[] == *A;

  int count = 0;

  for(int i = 0; i < n; i++){
    for(int j = i + 1; j < n; j++){
      for(int k = j + 1; k < n; k++){
        for(int l = k + 1; l < n; l++){
          if((A[i] - (2 * A[j]) + (3 * A[k]) - (4 * A[l])) == x){
            count++;
          }
        }
      }
    }
  }

  return count;
}

int main(){
  int n, x;
  cin >> n >> x;

  int A[n];
  for(int i = 0; i < n; i++){
    cin >> A[i];
  }

  // int *A = new int[n];
  // firstNest(A, n, x); same as A[n];

  int count = firstNest(A, n, x);


  cout << count;

  return 0;
}

// My Solution 
// Learned about what VLA (Variable Length Array)
 
// int main(){
//   int n, x;
//   cin >> n >> x;
 
//   int A[n];
//   for(int i = 0; i < n; i++){
//     cin >> A[i];
//   }
 
//   int count = 0;
 
//   for(int i = 0; i < n; i++){
//     for(int j = i + 1; j < n; j++){
//       for(int k = j + 1; k < n; k++){
//         for(int l = k + 1; l < n; l++){
//           if((A[i] - (2 * A[j]) + (3 * A[k]) - (4 * A[l])) == x){
//             count++;
//           }
//         }
//       }
//     }
//   }
 
//   cout << count;
 
//   return 0;
// }