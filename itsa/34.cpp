#include<bits/stdc++.h> 
using namespace std; 
int main(){ 
    long long a; 
    while(cin >> a){
        for(int i = 1; i <= a; i++){
            if(a%i == 0){
                cout << i;
                a == i ? cout << "\n" : cout << " ";
            }
        }
    } 
    return 0; 
}  