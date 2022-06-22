#include<bits/stdc++.h>
using namespace std;
int main(){
    long a;
    while(cin >> a){
        cout << "NT10=" << a/10 << "\n";
        a%=10;
        cout << "NT5=" << a/5 << "\n";
        a%=5;
        cout << "NT1=" << a << "\n";
    }
    return 0;
}