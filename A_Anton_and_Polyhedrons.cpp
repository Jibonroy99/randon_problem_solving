// Tetrahedron. Tetrahedron has 4 triangular faces.
// Cube. Cube has 6 square faces.
// Octahedron. Octahedron has 8 triangular faces.
// Dodecahedron. Dodecahedron has 12 pentagonal faces.
// Icosahedron. Icosahedron has 20 triangular faces.

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    vector<string>s(t);
    for(int i=0;i<t;i++){
        cin>>s[i];
    }
    int sum=0;
    for(string c:s){
        if(c=="Tetrahedron"){
            sum+=4;
        }
        else if(c=="Cube"){
            sum+=6;
        }
       else if(c=="Octahedron"){
            sum+=8;
        }
        else if(c=="Dodecahedron"){
            sum+=12;
        }
        else{
            sum+=20;
        }
       
    }
    cout<<sum;

    
    return 0;
}