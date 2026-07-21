#include<iostream>
using namespace std;

int main(){
  long long N;
  cin >> N;

  long long goodNo = 0;
  long long x = 0;

  for(int i = 1; i <= N; i++){
    cin >> x;

    if(x != 0 && 18 % x == 0) goodNo++;
    else if(x % 45 == 0) goodNo++;  
  }

  cout << goodNo;

  return 0;
}

// My Solution
// int main()
// {
//     int n, goodInt = 0;
//     cin >> n;
    
//     int A[n];
//     for(int i = 0; i < n; i++){
//         cin >> A[i];
//     }
    
//     for(int i = 0; i < n; i++){
//         if(A[i] != 0 and 18%A[i]==0){
//             goodInt++;
//         }else if(A[i]%45==0){
//             goodInt++;
//         }
//     }
    
//     cout << goodInt;
    
//     return 0;
// }