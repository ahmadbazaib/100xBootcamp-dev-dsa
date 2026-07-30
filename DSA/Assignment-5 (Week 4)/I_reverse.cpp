#include<bits/stdc++.h>
using namespace std;

int main()
{
  int N;
  cin >> N;  

  long long A[N];
  for(int i = 0; i < N; i++)
    cin >> A[i];
    
  int i = 0, j = N-1;
  while(i<=j){
    swap(A[i], A[j]);
    i++;
    j--;
  }

  for(int i = 0; i < N; i++)
    cout << A[i] << " ";
  
  return 0;
}

// My solution
// But we need to reverse the array in its place, so the above one is correct

// int main(){
//     long long n;
//     cin >> n;
    
//     long long A[n];
    
//     for(int i = 0; i < n; i++){
//         cin >> A[i];
//     }
    
//     for(int i = n - 1; i >= 0; i--){
//         cout << A[i] << " ";
//     }
    
//     return 0;
// }