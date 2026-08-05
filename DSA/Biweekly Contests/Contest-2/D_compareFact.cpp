#include <bits/stdc++.h>
using namespace std;

// int fact(int n){
//   int ans = 1;
//   if(n == 0){
//     return 1;
//   }else{
//     for(int i = 1; i <= n; i++){
//       ans *= i;
//     }

//     return ans;
//   }
// }


// int main(){
//   int a, b;
//   cin >> a >> b;

//   int factA = fact(a);
//   int factB = fact(b);

//   if(factA == factB){
//     cout << "Yes";
//   }else{
//     cout << "No";
//   }

//   return 0;
// }

int main() {
    long long a, b;
    cin >> a >> b;

    if (a == b || (a == 0 && b == 1) || (a == 1 && b == 0)) {
        cout << "Yes";
    } else {
        cout << "No";
    }

    return 0;
}