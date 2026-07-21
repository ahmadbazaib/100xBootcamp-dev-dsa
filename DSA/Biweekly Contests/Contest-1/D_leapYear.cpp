#include<iostream>
using namespace std;

int main(){
  int Y;
  cin >> Y;

  if(Y%100==0){
    if(Y%400==0){
      cout << "Yes";
    }else{
      cout << "No";
    }
  }else if(Y%4==0){
    cout << "Yes";
  }else{
    cout << "No";
  }

  return 0;
}

// My Solution

// int main()
// {
//     int n;
//     cin >> n;
    
//     if(n%100==0){
//         if(n%400==0){
//             cout << "Yes";
//         }else{
//             cout << "No";
//         }
//     }else if(n%4==0){
//         cout << "Yes";
//     }else{
//         cout << "No";
//     }
    
//     return 0;
// }
