#include<iostream>
using namespace std;

int main()
{
  int t;
  cin >> t;
  
  int N;

  while(t > 0){
    cin >> N;
    
    int A[N];
    for(int i = 0; i < N; i++)
      cin >> A[i]; 
     int ch1 = 0, ch2 = 0;
  
    for(int i = 0; i < N; i++){
      if(A[i] == 0)
        ch1++;
      else
        ch2++;
    }

    for(int i = 1; i <= ch1; i++){
      cout << "0" << " ";
    }

    for(int i = 1; i <= ch2; i++){
      cout << "1" << " ";
    }

    cout << endl;
    
    t--;
  }

  return 0;
}