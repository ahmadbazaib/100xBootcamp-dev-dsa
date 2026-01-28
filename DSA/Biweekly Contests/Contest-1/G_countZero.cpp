#include<iostream>
using namespace std;

int main(){
  long long N;
  cin >> N;

  long long num = 0;
  long long zero = 0;

  do{
    num = N%10;
    
    if(num == 0){
      zero++;
    }
    N /= 10;
  }while(N);
  
  cout << zero;

  return 0;
}