#include<bits/stdc++.h>
using namespace std;
// using ll = long long;

int main()
{ 
  int X, key;
  cin >> X >> key;

  int A[X];
  for(int i = 0; i < X; i++){
    cin >> A[i];
  }

  int count = 0;

  for(int i = 0; i < X; i++){
    if(key == A[i]){
      count++;
    }
  }

  cout << count;

  return 0;
}