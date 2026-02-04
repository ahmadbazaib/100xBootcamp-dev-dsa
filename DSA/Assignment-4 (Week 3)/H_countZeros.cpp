#include<iostream>
using namespace std;
using ll = long long;

ll countZeros(ll n){
  ll num = 0;
  ll zero = 0;

  do{
    num = n%10;
    if(num == 0)
    {
      zero++;
    }
    n/=10;
  }while(n);

  return zero;
}

int main()
{
  ll N, zero;
  cin >> N;
  
  zero = countZeros(N);
  cout << zero;

  return 0;
}