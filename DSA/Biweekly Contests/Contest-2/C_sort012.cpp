#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;

  int A[N];
  for(int i = 0; i < N; i++){
    cin >> A[i];
  }

  int count0 = 0, count1 = 0, count2 = 0;
  for(int i = 0; i < N; i++){
    if(A[i] == 0){
      count0++;
    }else if(A[i] == 1){
      count1++;
    }else{
      count2++;
    }
  }


  for(int i = 0; i < count2; i++){
    cout << 2 << " ";
  }

  for(int i = 0; i < count1; i++){
    cout << 1 << " ";
  }
  
  for(int i = 0; i < count0; i++){
    cout << 0 << " ";
  }

  return 0;
}