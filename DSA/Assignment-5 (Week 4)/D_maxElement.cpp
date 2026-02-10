#include<bits/stdc++.h>
using namespace std;

int main()
{
  int N;
  cin >> N;

  int A[N];
  
  for(int i = 0; i < N; i++){
    cin >> A[i];
  }
  
  long long ans = A[0];
  long long count = 1;

  for(int i = 1; i < N; i++){
    if(A[i] > ans){
      ans = A[i];
      count = i + 1;
    }
  }

  cout << ans << " " << count;

  return 0;
}