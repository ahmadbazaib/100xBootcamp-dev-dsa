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