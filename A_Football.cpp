#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    map<string,int>freq;
    for(int i=0;i<t;i++){
        string s;
        cin>>s;
        freq[s]++;

    }
   string winner;
    int maxGoals = 0;
    
    for (auto pair : freq) {
        if (pair.second > maxGoals) {
            maxGoals = pair.second;
            winner = pair.first;
        }
    }
    
 
    cout << winner << endl;
    return 0;
}

