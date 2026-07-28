#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
  int N; 
  cin >> N;
  
  int A[N];
  for(int i = 0; i < N; i++){
    cin >> A[i];
  }

  ll ans = A[0]; // assuming the min element is at A[0];
  ll location = 1; // then location will be 1 index;

  for(int i = 1; i < N; i++){
    if(A[i] < ans){
      ans = A[i];
      location = i + 1;
    }
  }

  cout << ans << " " << location;

  return 0;
}

// My Solution
// #include <iostream>
// #include <cmath>
// using namespace std;

// int main(){
//     int n, ele = INFINITY, in; 
//     cin >> n;
    
//     int A[n];
    
//     for(int i = 0; i < n; i++){
//         cin >> A[i];
//     }
    
//     for(int i = 0; i < n; i++){
//         if(ele > A[i]){
//             ele = A[i];
//             in = i + 1;
//         }
//     }
    
//     cout << ele << " " << in;
    
//     return 0;
// }