#include <iostream>
using namespace std;

int printFunc(int n){
  for(int i = 1; i <= n; i++){
    cout << "I am learning functions" << endl;
  }
}

int main()
{
  int N;
  cin >> N;

  printFunc(N);

  return 0;
}