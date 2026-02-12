#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define nl "\n"
#define yes "YES\n"
#define no "NO\n"

void solve() {
    int n;
    cin>>n;
    string s;
    cin>>s;
    int pair_count = 0;
    int count=1;
    int i=0;
    int j = i+1;
    int ans = 1;
    while(s[i]!='\0'){
        if(s[j]=='\0') break;
        if(s[i]==s[j]){
            count++;
            ans = max(ans,count);
            i++;
            j++;
        }else{
            count = 1;
            i++;
            j++;
        }
    }
    cout<<ans+1<<nl;




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