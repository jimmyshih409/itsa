#include<bits/stdc++.h> 
using namespace std; 
int main(){ 
    long long a, b; 
    while(cin >> a >> b){  
        if(a == 0 && b == 0){  
            cout << "Origin\n";  
        }else if(a == 0){  
            cout << "y-axis\n";  
        }else if(b == 0){  
            cout << "x-axis\n";  
        }else if(a > 0 && b > 0){  
            cout << "1st Quadrant\n";  
        }else if(a < 0 && b > 0){  
            cout << "2nd Quadrant\n";  
        }else if(a < 0 && b < 0){  
            cout << "3rd Quadrant\n";  
        }else{  
            cout << "4th Quadrant\n";  
        }  
    } 
    return 0; 
}  