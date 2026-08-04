#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;

  int left = n/2-1, right = n/2;
  int A[n];
  for(int i = 0; i < n; i++){
    cin >> A[i];
  }

  while(left >= 0 && right < n){
    cout << A[left]  << " ";
    cout << A[right] << " ";

    left--;
    right++;
  }

  return 0;
}