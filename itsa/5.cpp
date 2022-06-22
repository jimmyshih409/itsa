#include<bits/stdc++.h>
using namespace std;
int main(){
    double a;
    while(cin >> a){
        a *= a*100 ;
        if((long)a%10 >= 5){
            cout << fixed << setprecision(1) << (double)((long)(a+10)/10)/10 << "\n";
        }else{
            cout << fixed << setprecision(1) << (double)((long)(a)/10)/10 << "\n";
        }
    }
    return 0;
}