#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;

  int *A = new int[N];
  for(int i = 0; i < N; i++){
    cin >> A[i];
  }


  int lessTime = INT_MAX;
  int ind = 0;
  for(int i = 1; i < N; i++){
    if(A[i] <= lessTime){
      lessTime = A[i];
      ind = i;
    }
  }

  cout << ind + 1;

  return 0;
}