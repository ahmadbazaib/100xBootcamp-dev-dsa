#include<iostream>
using namespace std;

int main()
{ 
  long long int N, M;
  cin >> N >> M;

  cout << N << " + " << M << " = " << N + M << endl << endl;
  cout << N << " - " << M << " = " << N - M << endl << endl;
  cout << N << " * " << M << " = " << N * M << endl << endl;
  cout << N << " / " << M << " = " << N / M << endl << endl;
  cout << N << " % " << M << " = " << N % M;

  return 0;
}