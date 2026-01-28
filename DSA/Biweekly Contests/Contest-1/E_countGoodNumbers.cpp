#include<iostream>
using namespace std;

int main(){
  long long N;
  cin >> N;

  long long goodNo = 0;
  long long x = 0;

  for(int i = 1; i <= N; i++){
    cin >> x;

    if(x != 0 && 18 % x == 0) goodNo++;
    else if(x % 45 == 0) goodNo++;  
  }

  cout << goodNo;

  return 0;
}