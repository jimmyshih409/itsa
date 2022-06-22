#include<bits/stdc++.h>
using namespace std;
int main(){
    long long a, b, c;
    while(cin >> a >> b){
        c = 0;
        if(a > b){
            long long temp = a;
            a = b;
            b = temp;
        }
        for(a; a <= b; a++){
            c += a;
        }
        cout << c << "\n";
    }
    return 0;
}