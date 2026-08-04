#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;

  // last digit 2 or 7 -> d mod 10 = {2, 7}
  // d is a factor of N if N mod d = 0;

 
  
  bool found = false;
  for(int i = 1; i <= n; i++){
    if(n%i == 0){
      if(i%10 == 2 or i%10 == 7){
        cout << i << " ";
        found = true;
      }
    }
  }

  if(!found){
      cout << -1;
    }

  return 0;
}