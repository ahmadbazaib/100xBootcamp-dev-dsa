#include<iostream>
using namespace std;

int main()
{
  long long N;
  cin >> N;

  long long rev = 0;

  do{
    rev = rev * 10 + (N%10);
    N /= 10;
  }while(N);

  cout << rev;
  
  return 0;
}