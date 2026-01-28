#include<iostream>
using namespace std;

int main()
{
  // used long long to store larger numbers
  long long N, sum = 0;
  cin >> N;

  for(int i = 1; i <= N; i++){
    sum += i;
  }

  cout << sum;

  return 0;
}