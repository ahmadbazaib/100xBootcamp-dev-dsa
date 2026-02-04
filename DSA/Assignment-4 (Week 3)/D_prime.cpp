#include<iostream>
using namespace std;

bool prime(int n){
  int cnt = 0;
  for(int i = n; i >= 1; i--){
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

  int ans = prime(N);

  if(ans)
  {
    cout << "Prime";
  }else{
    cout << "Not Prime";
  }

  return 0;
}