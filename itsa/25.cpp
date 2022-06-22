#include<bits/stdc++.h>
using namespace std;
int main(){
    long long a, b, c;
    while(cin >> a){ 
        b = a/3;
        c = 0;
        for(int i = 1; i <= b; i++){
            c += i*3;
        }
        cout << c << "\n";
    }
    return 0;
}