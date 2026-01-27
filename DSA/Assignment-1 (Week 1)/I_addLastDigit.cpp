#include<iostream>
using namespace std;

int main()
{
  int N, M;
  cin >> N >> M;

  // Gives us the remainder
  N%=10;
  M%=10;
  
  cout << N + M;
  
  return 0;
}