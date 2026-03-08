#include<iostream>
using namespace std;

int main(){
  int t;
  cin >> t;

  
  while(t--){
    int N;
    cin >> N;

    int A[N];
    int left = 0;
    int right = N - 1;

    for(int i = 1; i <= N; i++){
      if(i % 2 == 1){
        A[left] = i;
        left++;
      }else{
        A[right] = i;
        right--;
      }
    }

    for(int i = 0; i < N; i++){
      cout << A[i] << " ";
    }
    cout<<endl;
  }

  return 0;
}