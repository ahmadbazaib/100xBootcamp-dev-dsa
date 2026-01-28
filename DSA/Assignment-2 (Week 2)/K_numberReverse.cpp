#include<iostream>
using namespace std;

int main() 
{
  long long N;
  cin >> N;

  long long d;
  do{
    d = N % 10;
    cout << d;
    N /= 10;
  } while(N);

  return 0;
}