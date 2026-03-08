#include<bits/stdc++.h>
using namespace std;

int main()
{
  int N;
  cin >> N;  

  long long A[N];
  for(int i = 0; i < N; i++)
    cin >> A[i];
    
  int i = 0, j = N-1;
  while(i<=j){
    swap(A[i], A[j]);
    i++;
    j--;
  }

  for(int i = 0; i < N; i++)
    cout << A[i] << " ";
  
  return 0;
}