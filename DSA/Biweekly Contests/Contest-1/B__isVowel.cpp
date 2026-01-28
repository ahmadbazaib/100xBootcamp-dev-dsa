#include<iostream>
using namespace std;

int main(){
  char V;
  cin >> V;

  if(V == 'a' || V == 'e' || V == 'i' || V == 'o' || V == 'u') cout << "YES";
  else cout << "NO";

  return 0;
}