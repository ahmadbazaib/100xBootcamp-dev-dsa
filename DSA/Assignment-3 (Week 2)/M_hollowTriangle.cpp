#include<iostream>
using namespace std;

int main()
{
  long long n;
  cin >> n;

  for(int i = 1; i <= n; i++){

    // printing spaces
    for(int j = 1; j <= (n-i); j++){
      cout << " ";
    } 

    // 
    for(int k = 1; k <= i; k++){
      if(i == 1 or i == n or k == 1 or k == i){
        cout << "* ";
      }else{
        cout << "  ";
      }
      // if(j < i) cout << " ";
    }
    cout << endl;
  }

  
  return 0;
}