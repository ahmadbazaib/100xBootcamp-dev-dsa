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

  int ans = INT_MIN;
  for(int i = 0; i < n; i++){
    for(int j = 0; j < m; j++){
      if(A[i][j] >= ans){
        ans = A[i][j];
      }
    }
  }

  cout << ans;

  return 0;
}