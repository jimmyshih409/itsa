#include<bits/stdc++.h>
using namespace std;
int main(){
    long a;
    while(cin >> a){
        if(((int)((a/0.238)*10))%10 > 0){
            cout << (int)(a/0.238) + 1 << "\n";
        }else{
            cout << (int)(a/0.238) << "\n";            
        }
    }
    return 0;
}