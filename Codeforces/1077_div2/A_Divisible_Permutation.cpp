#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define nl "\n"

void solve() {
    int n;
    cin>>n;
    int temp = n;
    vector<int>a;
    int i=1,j=n;
    while(j>=i){
        if(j==i){
            a.push_back(j);
            break;
        }
        a.push_back(j);
        a.push_back(i);
        j--;
        i++;
    }
reverse(a.begin(),a.end());
for(auto it:a){
    cout<<it<<" ";
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