#include<iostream>
using namespace std;

int main()
{
  int L, R;
  cin >> L >> R;

  if(L <= R){
    for(; L <= R; L++){
      cout << L << " ";
    }
  } else{
    for(; L >= R; L--){
      cout << L << " ";
    }
  }

  return 0;
}