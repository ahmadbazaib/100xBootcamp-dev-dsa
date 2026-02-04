#include<iostream>
using namespace std;

int printFactors(int x, int y){
  int gcd;
  for(int i = 1; i <= x && i <= y; i++){
    if(x%i == 0 && y%i==0){
      gcd = i;
    }
  }

  return gcd;
}

int main()
{
  int A, B, gcd;
  cin >> A >> B;

  gcd = printFactors(A, B);
  
  cout << gcd;

  return 0;
}