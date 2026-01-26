#include <bits/stdc++.h>
using namespace std;

#define fast_io() ios::sync_with_stdio(false); cin.tie(nullptr)
#define ll long long
#define nl "\n"

void solve() {
    int n,m;
    cin>>n>>m;
    vector<int>vec(n);
    vector<int>v(m);
    for(int i=0;i<n;i++){
        cin>>vec[i];
    }
    for(int j=0;j<m;j++){
        cin>>v[j];
    }
    sort(vec.begin(),vec.end());
    sort(v.begin(),v.end());
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(vec[i]==v[j]){
                cout<<vec[i];
                return;
            }
        }
    }
       auto min_f = *min_element(vec.begin(),vec.end());
       auto  min_s = *min_element(v.begin(),v.end());
        int a = min(min_f,min_s);
        int b = max(min_f,min_s);
        cout<<a<<b;
    
}

int main() {
    fast_io();
    solve();
    return 0;
}