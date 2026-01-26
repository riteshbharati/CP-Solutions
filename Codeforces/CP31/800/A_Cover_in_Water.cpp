#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define nl "\n"

void solve() {
    int n;
    cin>>n;
    string s;
    cin>>s;
    bool isFound = false;
    int count = 0;
    for(int i=0;i<n;i++){
        if(s[i]=='.' && s[i+1]=='.' && s[i+2]=='.'){
            isFound = true;
            break;
        }

        }
        for(char c:s){
                if(c=='.'){
                    count++;
                }
    }
    if(isFound){
        cout<<2<<nl;
    }else{
        cout<<count<<nl;
    }
    
    
}

int main() {
    fastio;
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}