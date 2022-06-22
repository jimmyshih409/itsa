#include<bits/stdc++.h>
using namespace std;
int main(){
    long a, b;
    while(cin >> a >> b){
        cout << a << "+" << b << "=" << a+b << "\n";
        cout << a << "*" << b << "=" << a*b << "\n";
        cout << a << "-" << b << "=" << a-b << "\n";
        if(a%b < 0){
            if(b < 0){
                cout << a << "/" << b << "=" << a/b + 1 << "..." << a%b - b << "\n";
            }else{
                cout << a << "/" << b << "=" << a/b - 1 << "..." << a%b + b << "\n";                
            }
        }else{
            cout << a << "/" << b << "=" << a/b << "..." << a%b << "\n";                
        }
    }
    return 0;
}