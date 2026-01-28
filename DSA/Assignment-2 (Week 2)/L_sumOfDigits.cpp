#include<iostream>
using namespace std;

int main()
{
  long long N;
  cin >> N;

  long long sum = 0, d;


  do{
    d = N%10;
    sum += d;
    N/=10;
  }while(N);

  cout << sum;
  
  return 0;
}