#include<bits/stdc++.h>
using namespace std;
int main(){
    long a, b;
    while(cin >> a){ 
        int i = 0;
        while(a >= (1 << (i*4))){
            i++;
        }
        i--;
        for(i; i >= 0; i--){
            b = 1 << (i*4);
            if(a/b == 15){
                cout << "F";
            }else 
            if(a/b == 14){
                cout << "E";
            }else 
            if(a/b == 13){
                cout << "D";
            }else 
            if(a/b == 12){
                cout << "C";
            }else 
            if(a/b == 11){
                cout << "B";
            }else 
            if(a/b == 10){
                cout << "A";
            }else{
                cout << a/b;
            }
            a%=b;
        }
        cout << "\n";

    }
    return 0;
}