#include<bits/stdc++.h>
using namespace std;
int main(){
    long a, b;
    while(cin >> a >> b){
        if(a*a+b*b <= 10000){
            cout << "inside\n";
        }else{
            cout << "outside\n";            
        }
    }
    return 0;
}