#include<iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;

  for(int i = n; i >= 1; i--){
    for(int j = i; j >= 1; j--){
      cout << "*";
    }

    for(int k = 1; k <= 2 * (n - i) + 1; k++){
      cout << " ";
    }

    for(int j = i; j >= 1; j--){
      cout << "*";
    }

    cout << endl;
  }

    for(int i = 2; i <= n; i++){
    // i stars
    for(int j = 1; j <= i; j++){
      cout << "*";
    }

    // spaces
    for(int k = 1; k <= 2 * (n - i) + 1; k++){
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