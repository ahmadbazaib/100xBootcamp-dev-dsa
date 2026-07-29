#include<bits/stdc++.h>
using namespace std;

void check(bool n){
  if(n){
    cout << "NO";
  }else{
    cout << "YES";
  }
}

int main()
{
  long long N;
  cin >> N;

  long long A[N];
  for(int i = 0; i < N; i++){
    cin >> A[i];
  }

  bool flag = false;

  for(int i = 1; i < N; i++){
    if( A[i] < A[i - 1]){
      flag = true;
      break; // jump out of the loop
    }
  }

  check(flag);

  return 0;
}

// My solution

// int main(){
//     int n; 
//     cin >> n;
    
//     int A[n];
    
//     for(int i = 0; i < n; i++){
//         cin >> A[i];
//     }
    
//     bool flag = true;
    
//     for(int i = 0; i < n - 1; i++){
//         if(A[i] > A[i + 1]){
//             flag = false;
//         }
//     }
    
//     if(flag){
//         cout << "YES";
//     }else{
//         cout << "NO";
//     }
    
//     return 0;
// }