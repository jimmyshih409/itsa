#include<bits/stdc++.h>
using namespace std;
int main(){
    double a;
    while(cin >> a){ 
        if(a >= 1500){
            cout << fixed << setprecision(1) << a*0.9*0.79 << "\n";
        }else if(a > 800){
            cout << fixed << setprecision(1) << a*0.9*0.9 << "\n";            
        }else{
            cout << fixed << setprecision(1) << a*0.9 << "\n";                  
        }
    }
    return 0;
}