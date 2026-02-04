#include<iostream>
using namespace std;

// #define long long int // risky
using ll = long long;

// Not ideal for real programs limits reusability
// void fact(int n){
//   ll ans = 1;
  
//   for(int i = 1; i <= n; i++){
//     ans *= i;
//   }

//   cout << ans;
// }

ll fact(int n){
  ll ans = 1;
  for(int i = 1; i <= n; i++){
    ans *= i;
  }
  return ans;
}


int main()
{
  int N;
  cin >> N;

  cout << fact(N);

  return 0;
}