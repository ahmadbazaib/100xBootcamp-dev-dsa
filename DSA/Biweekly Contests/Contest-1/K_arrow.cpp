#include<iostream>
using namespace std; 

int main()
{
    int n;
    cin >> n;
    
    for(int i = 1; i <= (n - 1); i++){
        for(int j = 1; j < i; j++){
            cout << ".";
        }
        
        for(int j = 1; j <= i; j++){
            if(j == 1 || j == i){
                cout << ">";  
                if(j < i) cout << " ";
            }else{
                cout << ".";
            }
        }
        
        cout << endl;
    }
    
    for(int i = n; i >= 1; i--){
        for(int j = 1; j < i; j++){
            cout << ".";
        }
        
        for(int j = 1; j <= i; j++){
            if(j == 1 || j == i){
                cout << ">"; 
                if(j < i) cout << " ";
            }else{
                cout << ".";
            }
        }
        
        cout << endl;
    }
    return 0;
} // wrong output, will need to work on it again
