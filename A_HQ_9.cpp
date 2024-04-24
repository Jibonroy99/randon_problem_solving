#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin>>s;
    int t=1;
    for(char c:s){
        if(c=='H' ||c=='Q' || c=='9' ){
            t=0;
        }
    }
    if(t==0){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    
    return 0;
}