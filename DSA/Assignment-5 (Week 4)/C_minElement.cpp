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