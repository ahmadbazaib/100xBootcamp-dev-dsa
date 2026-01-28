#include<iostream>
using namespace std;

int main()
{
  long long N, tempN;
  cin >> N;
  tempN = N;

  // Reverse a number:
  long long revNum = 0;
  do{
    revNum = revNum * 10 + (tempN % 10);
    tempN /= 10;
  }while(tempN);


  if(N == revNum) cout << "YES";
  else cout << "NO";

  return 0;
}