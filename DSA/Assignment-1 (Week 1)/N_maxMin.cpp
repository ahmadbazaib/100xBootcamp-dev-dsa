#include<iostream>
using namespace std;

int main()
{
  int A, B, Min, Max;
  cin >> A >> B;

  if(A > B){
    Min = B;
    Max = A;
  }else{
    Max = B;
    Min = A;
  }

  cout << "Min = " << Min << endl;
  cout << "Max = " << Max;

  return 0;
}