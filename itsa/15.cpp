#include<bits/stdc++.h>
using namespace std;
int main(){
    long a, b;
    while(cin >> a >> b){
        if(a <= 100 && a >= 0 && b <= 100 && b >= 0){
            cout << "inside\n";
        }else{
            cout << "outside\n";            
        }
    }
    return 0;
}