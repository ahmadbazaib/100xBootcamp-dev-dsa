#include<iostream>
using namespace std;

int main(){
  long long N;
  cin >> N;

  long long digit = 0;
  for(int i = 0; i < 2; i++)
  {
    digit = N % 10;
    N /= 10;
  }
  cout << digit;

  return 0;
}

// My Solution

// int main()
// {
//     int n, digit, num = 2;
//     cin >> n;

//     do{
//         digit = n%10;
//         n/=10;
//         num--;
//     }while(num > 0);
    
//     cout << digit;
//     return 0;
// }