#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);

typedef long long ll;
int solve(int &n,string &s){
    for(int i=0;i<s.length();i++){
        for(int i=0;i<s.length();i++){
        if(s[i]=='2' && s[i+1]=='0'&& s[i+2]=='2'&& s[i+3]=='6'){
                return 0;
            }}
             if(s[i]=='2' && s[i+1]=='0'&& s[i+2]=='2'&& s[i+3]=='5'){
                return 1;
            }
        }
        return 0;

}

int main() {
    fastio;
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        if(solve(n,s)){
            cout<<"1\n";
        }else{
            cout<<"0\n";
        }
    }

    return 0;
}
