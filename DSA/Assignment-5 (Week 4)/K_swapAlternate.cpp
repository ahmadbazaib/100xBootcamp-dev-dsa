#include<iostream>
using namespace std;

int main()
{
  int t;
  cin >> t;

  int N;

  while(t > 0){
    cin >> N;

    int A[N];
    for(int i = 0; i < N; i++)
      cin >> A[i];
    
    for(int i = 1; i < N; i+=2){
      swap(A[i], A[i-1]);
    }

    for(int i = 0; i < N; i++){
      cout << A[i] << " ";
    }
    cout<< endl;

    t--;
  }

  return 0;
}