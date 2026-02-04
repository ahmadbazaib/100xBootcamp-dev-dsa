#include<iostream>
using namespace std;

using ll = long long;

void printFactors(ll n){
  for(ll i = 1; i <= n; i++){
    if(n%i==0){
        cout << i << " ";
    }
  }
}

int main()
{
  ll N;
  cin >> N;

  printFactors(N);

  return 0;
}