#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define nl "\n"

void solve() {
    int n;
    cin>>n;
    vector<int> vec(n);
    for(int i=0;i<n;i++){
        cin>>vec[i];
    }
    vector<int>ans = vec;
    sort(ans.begin(),ans.end());
    reverse(ans.begin(),ans.end());
    bool isGood = false;
    if(ans[0]!=ans[1]){
        isGood = true;
    }else{
        for(int j=2;j<n;j++){
            if(ans[j]!=ans[1]){
                swap(ans[j],ans[1]);
                isGood  = true;
                break;
            }
        }
    }
    if(isGood){
        cout<<"YES\n";
        for(auto it:ans){
            cout<<it<<" ";
        }
    }else{
        cout<<"NO";
    }
    cout<<nl;
    
    
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