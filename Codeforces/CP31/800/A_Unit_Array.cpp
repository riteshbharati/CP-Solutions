#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define nl "\n"

void solve() {
    int n;
    cin>>n;
    vector<int>vec(n);
    int count_one = 0,count_neg_one = 0;
    for(int i=0;i<n;i++){
        cin>>vec[i];
        if(vec[i]==1){
            count_one++;
        }else{
            count_neg_one++;
        }
    }
    int ans = 0;
    while(true){
        if(count_one>=count_neg_one && count_neg_one%2==0){
            break;
        }else{
            count_one++;
            count_neg_one--;
            ans++;
        }
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