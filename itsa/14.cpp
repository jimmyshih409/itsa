#include<bits/stdc++.h>
using namespace std;
int main(){
    long a;
    while(cin >> a){
        cout << a/86400 << " days\n" << a%86400/3600 << " hours\n" << a%3600/60 << " minutes\n" << a%60 << " seconds\n";
    }
    return 0;
}