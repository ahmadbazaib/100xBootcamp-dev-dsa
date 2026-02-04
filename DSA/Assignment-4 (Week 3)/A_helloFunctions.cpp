#include <iostream>
using namespace std;

void printFunc(int n){
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