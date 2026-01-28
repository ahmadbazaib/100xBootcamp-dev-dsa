#include<iostream>
using namespace std;

int main(){
  int Y;
  cin >> Y;

  if(Y%100==0){
    if(Y%400==0){
      cout << "Yes";
    }else{
      cout << "No";
    }
  }else if(Y%4==0){
    cout << "Yes";
  }else{
    cout << "No";
  }

  return 0;
}