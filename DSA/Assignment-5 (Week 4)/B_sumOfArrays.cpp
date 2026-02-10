#include<iostream>
using namespace std;
using ll = long long;

int main()
{
  int N;
  cin >> N;

  ll A[N];
  ll sum = 0;

  for(int i = 0; i <= N - 1; i++){
    cin >> A[i];

    // Getting elements and adding them in the same loop
    sum += A[i];
  }

  cout << sum;

  return 0;
}