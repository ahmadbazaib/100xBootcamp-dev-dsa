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

  for(int j = 0; j < m; j++){
    cout << A[0][j] << " ";
  }

  for(int i = 1; i < n; i++){
    cout << A[i][m-1] << " ";
  }

  if(n > 1){
    for(int j = m - 2; j >= 0; j--){
      cout << A[n-1][j] << " ";
    }
  }
    
  if(m > 1){
    for(int i = n-2; i > 0; i--){
      cout << A[i][0] << " ";
    }
  }

  return 0;
}
