#include <bits/stdc++.h>
using namespace std;

int main(){
  int n, m;
  cin >> n >> m;

  int A[n][m];
  for(int i = 0; i < n; i++){
    for(int j = 0; j < m; j++){
      cin >> A[i][j];
    }
  }

  for(int i = 0; i < n; i++){
    if(i%2==0){
      for(int j = i; j <= i; j++){
        for(int k = 0; k < m; k++){
          cout << A[j][k] <<  " ";
        }
      }
    }else{
      for(int j = i; j <= i; j++){
        for(int k = m - 1; k >= 0; k--){
          cout << A[j][k] << " ";
        }
      }
    }
  }

  return 0;
}
