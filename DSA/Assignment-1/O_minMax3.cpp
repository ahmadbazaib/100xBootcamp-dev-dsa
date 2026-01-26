#include<iostream>
using namespace std;

int main()
{
  int A, B, C, Min, Max;
  cin >> A >> B >> C;

  if(A > B && A > C){
    Max = A;
    if(B < C){
      Min = B;
    }else{
      Min = C;
    }
  }else if(B > C){
    Max = B;
    if(A < C){
      Min = A;
    }else{
      Min = C;
    }
  } else {
    Max = C;
     if(B < A){
      Min = B;
    }else{
      Min = A;
    }
  }

  cout << "Min = " << Min << endl;
  cout << "Max = " << Max;

  return 0;
}