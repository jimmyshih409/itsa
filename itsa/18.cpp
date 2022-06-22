#include<bits/stdc++.h>
using namespace std;
int main(){
    long a;
    while(cin >> a){ 
        if(a >=0){  
            for(int i = 7; i >= 0; i--){  
                //printf("%d", a/(1 << i));  
                cout << a/(1 << i);
                a%=(1 << i);  
            }  
        }else{  
            a *= -1;  
            a-=1;  
            for(int i = 7; i >= 0; i--){  
                //printf("%d", !(a/(1 << i)));  
                cout << !(a/(1 << i));
                a%=(1 << i);  
            }  
        }  
        cout << "\n"; 
    }
    return 0;
}