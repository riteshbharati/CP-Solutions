#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define nl "\n"

void solve() {
    int n;
    cin>>n;
    int temp = n;
    vector<int>vec;
    while(temp!=0){
        vec.push_back(temp%10);
        temp/=10;
    }
    auto ans = min_element(vec.begin(),vec.end());
    cout<<*(ans)<<nl;
    
    
    
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