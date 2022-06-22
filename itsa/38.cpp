#include<bits/stdc++.h> 
using namespace std; 
int main(){ 
    long long a, b, c; 
    while(cin >> a >> b >> c){   
        if(a >= b && a >=c){  
            b+c>a?cout << "fit\n":cout << "unfit\n";  
        }else if(b >= a && b >=c){  
            a+c>b?cout << "fit\n":cout << "unfit\n";  
        }else if(c >= b && c >=a){  
            b+a>c?cout << "fit\n":cout << "unfit\n";  
        }  
    } 
    return 0; 
}  