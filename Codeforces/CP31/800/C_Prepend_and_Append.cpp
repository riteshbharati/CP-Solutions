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
    int left = 0,right = n-1;
    int ans = n;
    while(left<right){
        if((s[left]!=s[right])){
            ans -=2;
             
        }else{
                break;
            }
            left++;
            right--;
        
    }
    cout<<ans<<nl;
    
    
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