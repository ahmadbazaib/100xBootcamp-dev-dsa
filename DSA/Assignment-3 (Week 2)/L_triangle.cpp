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

    // printing stars
    for(int j = 1; j <= i; j++){
      cout << "*";
      if(j < i) cout << " ";
    }
    cout << endl;
  }

  
  return 0;
}