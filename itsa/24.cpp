#include<bits/stdc++.h>
using namespace std;
int main(){
    double a, b;
    while(cin >> a >> b){ 
        if(a > 120){
            cout << fixed << setprecision(1) << 60*b + 60*b*1.33 + (a - 120)*1.66*b << "\n";
        }else if(a > 60){
            cout << fixed << setprecision(1) << 60*b + (a - 60)*1.33*b << "\n";
        }else{
            cout << fixed << setprecision(1) << 60*b*a << "\n";
        }
    }
    return 0;
}