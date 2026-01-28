#include<iostream>
using namespace std;

int main(){
  long long N;
  cin >> N;

  long long digit = 0;
  for(int i = 0; i < 2; i++)
  {
    digit = N % 10;
    N /= 10;
  }
  cout << digit;

  return 0;
}