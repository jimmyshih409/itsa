#include<bits/stdc++.h>
using namespace std;
long gdc(long n, long m){
    return (m == 0)? n: gdc(m, n%m);
}
int main(){
    long a, b;
    while(cin >> a >> b){
        cout << gdc(a, b) << "\n";
    }
    return 0;
}