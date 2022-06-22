#include<bits/stdc++.h>
using namespace std;
int main(){
    long long a, b;
    while(cin >> a){ 
        b = 1;
        while(a > 0){
            b*=a;
            a--;
        }
        cout << b << "\n";
    }
    return 0;
}