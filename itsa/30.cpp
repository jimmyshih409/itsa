#include<bits/stdc++.h> 
using namespace std; 
int main(){ 
    long long a, b; 
    while(cin >> a){ 
        b = 0;  
        if(a < 2){  
            cout << "NO\n";  
            continue;  
        }  
        for(int i = 2; i*i <= a; i++){  
            if(a%i == 0){  
                cout << "NO\n";  
                b = 1;  
                break;  
            }  
        }  
        if(b){  
            continue;  
        }  
        cout << "YES\n";  
    } 
    return 0; 
}  