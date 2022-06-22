#include<bits/stdc++.h>
using namespace std;
int main(){
    double a, b, c;
    while(cin >> a >> b >> c){
        cout << "Trapezoid area:" << fixed << setprecision(1) << (a + b)*c/2 << "\n";
    }
    return 0;
}