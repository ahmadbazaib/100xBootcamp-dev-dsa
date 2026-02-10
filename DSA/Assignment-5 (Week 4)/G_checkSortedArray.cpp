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