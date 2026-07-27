#include <iostream>
using namespace std;

int nCr(int n){
  int ans = 1;
  for(int i = 1; i <= n; i++){
    ans *= i;
  }
  return ans;
}

int main()
{
  int n, r;
  cin >> n >> r;

  // n
  int nFact = nCr(n);

  // r
  int rFact = nCr(r);


  // (n - r)
  int nrFact = nCr(n-r);

  int binomialC = nFact / (rFact * nrFact);

  cout << binomialC;

  return 0;
}

// My Solution
// using ll = long long;

// ll nCr(int n, int r){
//     ll ans1 = 1, ans2 = 1, ans3 = 1, fAns = 1;
//     ll nr = n - r;
    
//     for(int i = 1; i <= n; i++){
//         ans1 *= i;
//     }
    
//     for(int i = 1; i <= r; i++){
//         ans2 *= i;
//     }
    
//     for(int i = 1; i <= nr; i++){
//         ans3 *= i;
//     }
    
//     fAns = (ans1/(ans2 * ans3));
    
//     return fAns;
    
// }

// int main()
// {
//     int n, r;
//     cin >> n >> r;
    
//     ll fAns = nCr(n, r);
    
//     cout << fAns;
    
//     return 0;
// }