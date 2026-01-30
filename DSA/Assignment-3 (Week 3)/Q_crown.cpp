#include<iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;

  for(int i = 1; i <= n; i++){
    // i stars
    for(int j = 1; j <= i; j++){
      cout << "*";
    }

    // spaces
    for(int k = 1; k <= 2 * (n - i); k++){
      cout << " ";
    }

    // i stars
    for(int j = 1; j <= i; j++){
      cout << "*";
    }
    
    cout << endl;
  }

  return 0;
}