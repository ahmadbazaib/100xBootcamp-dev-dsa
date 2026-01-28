#include<iostream>
using namespace std;

int main()
{
  int N;
  cin >> N;

  int pos=0, neg=0, even=0, odd=0;
  int x;

  for (int i = 0; i < N; i++){
    cin >> x;
    
    if(x > 0) pos++;
    else if(x < 0) neg++;
    
    if(x%2==0 ) even++;
    else odd++;
  }

  cout << pos << endl << neg << endl << even << endl << odd;

  return 0;
}