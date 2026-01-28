#include<iostream>
using namespace std;

int main()
{
  long long x, n, prod = 1;
  cin >> x >> n;

  for(int i = 1; i <= n; i++){
    prod *= x;
  }
  cout << prod;

  return 0;
}