#include<iostream>
using namespace std;

int main() 
{
  long long N;
  cin >> N;

  // Initialization is imp as garbage value will be assigned
  long long d = 0;
  do{
    // d = d * 10 + (N%10);
    d = N % 10;
    cout << d;
    N /= 10;
  } while(N);
  
  // cout << d;
  
  return 0;
}