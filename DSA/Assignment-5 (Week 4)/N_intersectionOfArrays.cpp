#include <bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin >> t;

  int n, m;
  while(t > 0){
    cin >> n;
    int A[n];
    for(int i = 0; i < n; i++){
      cin >> A[i];
    }

    cin >> m;
    int B[m];
    for(int i = 0; i < m; i++){
      cin >> B[i];
    }

    for(int i = 0; i < n; i++){
      for(int j = 0; j < m; j++){
        if(A[i] == B[j]){
          cout << A[i] << " ";
          B[j] = -1;
          break;
        }
      }
    }

    cout << endl;
    t--;
  }

  return 0;
}