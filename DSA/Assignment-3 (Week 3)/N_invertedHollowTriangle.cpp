#include<iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;

  for(int i = n; i >= 1; i--){
    for(int j = i; j <= (n-1); j++){
      cout << " ";
    }

    for(int k = 1; k <= i; k++){
      if(i == 1 || i == n || k == 1 || k == i){
        cout << "* ";
      }else {
        cout << "  ";
      }
    }
    cout << endl;
  }

  return 0;
}