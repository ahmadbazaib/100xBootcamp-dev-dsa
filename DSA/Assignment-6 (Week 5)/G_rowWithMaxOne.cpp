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

  int count = 0, maxCount = 0, ind;
  for(int i = 0; i < n; i++){
    for(int j = 0; j < m; j++){
      if(A[i][j] == 1){
        count++;
      }
    }
    if(count > maxCount){
      maxCount = count;
      ind = i;
    }
    count = 0;
  }

  if(maxCount){
    cout << ind;
  }else{
    cout << -1;
  }

  return 0;
}