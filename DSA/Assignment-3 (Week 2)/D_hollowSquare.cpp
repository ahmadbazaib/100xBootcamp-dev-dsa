#include<iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;

  for(int i = 1; i <= n; i++){
    for(int j = 1; j <= n; j++){
      if(i == 1 || i == n || j == 1 || j == n){
        cout << "*";
      }else{
        cout << " ";
      }
    }
    cout << endl;
  }

  return 0;
}

// My solution
// It works but not for all cases:

// int main(){
//     int n;
//     cin>>n;
    
//     for(int i = 1; i < 2; i++){
//         for(int j = 1; j <= n; j++){
//             cout << "*";
//         }
//         cout << endl;
//     }
    
//     for(int i = 1; i <= n - 2; i++){
//         cout << "*";
//         for(int i = 2; i <= n - 1; i++){
//             cout <<" ";
//         }
//         cout << "*" << endl;
//     }
    
//      for(int i = 1; i < 2; i++){
//         for(int j = 1; j <= n; j++){
//             cout << "*";
//         }
//     }

//     return 0;
// }