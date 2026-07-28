#include<bits/stdc++.h>
using namespace std;
// using ll = long long;

int main()
{ 
  int X, key;
  cin >> X >> key;

  int A[X];
  for(int i = 0; i < X; i++){
    cin >> A[i];
  }

  for(int i = 0; i < X; i++){
    if(key == A[i]){
      cout << "YES";
      return 0;
    }
  }

  cout << "NO";

  return 0;
}

// My Solution

// int main(){
//     int n, x, key; 
//     cin >> n >> x;
    
//     int A[n];
    
//     for(int i = 0; i < n; i++){
//         cin >> A[i];
//     }
    
//     for(int i = 0; i < n; i++){
//         if(x == A[i]){
//             key =  A[i];
//         }
//     }
    
//     if(key == x){
//         cout << "YES";
//     }else
//     {
//         cout << "NO";
//     }
    
//     return 0;
// }