#include<bits/stdc++.h>
using namespace std;
int main(){
    long a, b, c, d, e, f;
    while(cin >> a >> b >> c >> d){
        e = a*60+b;
        f = c*60+d;
        f -= e;
        if(f > 240){
            cout << 120+160+(f-240)/30*60 << "\n";
        }else if(f > 120){
            cout << 120+(f-120)/30*40 << "\n";
        }else{
            cout << f/30*30 << "\n";
        }
    }
    return 0;
}