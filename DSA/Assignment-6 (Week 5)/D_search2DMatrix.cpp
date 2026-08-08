#include <bits/stdc++.h>
using namespace std;

int main(){
  int n, m, x;
  cin >> n >> m >> x;

  int A[n][m];
  for(int i = 0; i < n; i++){
    for(int j = 0; j < m; j++){
      cin >> A[i][j];
    }
  }

  bool flag = false;

  for(int i = 0; i < n; i++){
    for(int j = 0; j < m; j++){
      if(A[i][j] == x){
        flag = true;
        break;
      }
    }
  }

  if(flag){
    cout << "true";
  }else{
    cout << "false";
  }

  return 0;
}