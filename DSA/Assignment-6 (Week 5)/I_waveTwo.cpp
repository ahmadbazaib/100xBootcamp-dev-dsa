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

  for(int i = 0; i < m; i++){
    if(i%2==0){
      for(int j = i; j <= i; j++){
        for(int k = 0; k < n; k++){
          cout << A[k][j] <<  " ";
        }
      }
    }else{
      for(int j = i; j <= i; j++){
        for(int k = n - 1; k >= 0; k--){
          cout << A[k][j] << " ";
        }
      }
    }
  }

  return 0;
}
