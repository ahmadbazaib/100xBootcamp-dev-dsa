#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;

  // Dynamic Memory allocation -> Heap
  // int *A = new int[N];
  int A[N];
  for(int i = 0; i < N; i++){
    cin >> A[i];
  }

  int passMarks;
  cin >> passMarks;


  int fail = 0, pass = 0;
  for(int i = 0; i < N; i++){
    if(A[i] >= passMarks){
      pass++;
    }else{
      fail++;
    }
  }

  cout << "Pass: " << pass << endl;
  cout << "Fail: " << fail;

  return 0;
}