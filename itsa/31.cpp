#include<bits/stdc++.h> 
using namespace std; 
int main(){ 
    long long a, b; 
    while(cin >> a){ 
        b = 0;
        for(int i = 1; i <= a; i++){
            if(i%2 == 0 && i%3 == 0 && i%12 != 0){
                b += i;
            }
        }
        cout << b << "\n";
    } 
    return 0; 
}  