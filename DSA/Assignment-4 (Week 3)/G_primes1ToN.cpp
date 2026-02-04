#include<iostream>
using namespace std;

bool isPrime(int n){
  int cnt = 0;
  for(int i =1; i <= n; i++){
    if(n%i==0){
      cnt++;
    }
  }
  return (cnt == 2);
}

int main()
{
  int N;
  cin >> N;

  for(int i = 1; i <= N; i++)
  {
    if(isPrime(i)){
      cout << i << " ";
    }
  }

  return 0;
}