#include<bits/stdc++.h>
using namespace std;
int main(){
    long long a;
    while(cin >> a){ 
        for(int i = 1; i <= a; i++){
            cout << i << "*" << i << "=" << i*i <<"\n";
        }
    }
    return 0;
}