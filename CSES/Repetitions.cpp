#include <bits/stdc++.h>
using namespace std;
 
#define fast_io() ios::sync_with_stdio(false); cin.tie(nullptr)
#define ll long long
#define nl "\n"
 
void solve(string &s) {
    ll ans = 1;
    char temp = s[0];
    ll tmp = ans;
    for(int i=0;i<s.length();i++){ 
        if(s[i+1]==temp){
            ans++;
            tmp = max(tmp,ans);
        }else{
            ans = 1;
            temp = s[i+1];
 
        }
    }
    cout<<tmp;
    
    
    
}
 
int main() {
    fast_io();
    string s;
    cin>>s;
    solve(s);
    return 0;
}
