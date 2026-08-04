#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;

  int A[N];
  for(int i = 0; i < N; i++){
    cin >> A[i];
  }

  bool flag = true;

  for(int i = 1; i < N; i++){
    if(A[i] == A[i - 1]){
      continue;
    }else{
      flag = false;
      break;
    }
  }

  if(flag){
    cout << "YES";
  }else{
    cout << "NO";
  }
  
  return 0;
}