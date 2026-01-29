#include<iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;

  for(int i = 1; i <= n; i++){

    int num;
    if(i % 2 == 0){
      num = 1;
    }else{
      num = 0;
    }

    for(int j = 1; j <= i; j++){

      cout << num%2; 
      // cout << num%2; 
      // num++;
      
      if(num == 0){
        num = 1;
      }else{
        num = 0;
      }
    }
    cout << endl;
  }
  
  return 0;
}