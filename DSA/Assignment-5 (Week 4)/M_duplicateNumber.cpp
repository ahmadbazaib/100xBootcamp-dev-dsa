#include<iostream>
using namespace std; 

int main()
{
  int t;
  cin >> t;

  while(t--){
    int N;
    cin >> N;

    int A[N];
    for(int i = 0; i < N; i++){
      cin >> A[i];
    }


    int ans;
    for(int i = 0; i < N; i++){

      int target = A[i];
      int count = 0;

      for(int j = 0; j < N; j++){
        if(A[j] == target){
          count++;
        }
      }

      if(count == 2){
        ans = A[i];
        break;
      }
    }

    cout << ans << endl;

  }

  return 0;
}