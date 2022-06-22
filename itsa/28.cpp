#include<bits/stdc++.h> 
using namespace std; 
int main(){ 
    long long a, b; 
    while(cin >> a){ 
        b = a/35; 
        for(long long i = 1; i <= b; i++){ 
            cout << 35*i; 
            (i == b)?cout << "\n" : cout << " ";
        } 
    } 
    return 0; 
}  