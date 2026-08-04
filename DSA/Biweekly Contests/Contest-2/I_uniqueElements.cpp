#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;

  int A[n];
  for(int i = 0; i < n; i++){
    cin >> A[i];
  }

  int count = 0;
  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      if(A[i] == A[j]){
        count++;
      }
    }

    if(count == 1){
      cout << A[i] << " ";
    }

    count = 0;
  }

  return 0;
}