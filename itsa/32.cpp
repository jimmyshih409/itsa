#include<bits/stdc++.h> 
using namespace std; 
int main(){ 
    long long a; 
    while(cin >> a){
        if(a == (a/100)*(a/100)*(a/100)+(a%100/10)*(a%100/10)*(a%100/10)+(a%10)*(a%10)*(a%10)){
            cout << "Yes\n";
        }else{
            cout << "No\n";
        }
    } 
    return 0; 
}  