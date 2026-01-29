#include <bits/stdc++.h>
using namespace std;

#define fast_io() ios::sync_with_stdio(false); cin.tie(nullptr)
#define ll long long
#define nl "\n"

void solve() {
    int n,m;
    cin>>n>>m;
    vector<int>a(n),b(m),ans;
    for(int k=0;k<n;k++){
        cin>>a[k];
    }
    for(int k=0;k<m;k++){
        cin>>b[k];
    }
    int i = 0,j = 0;
    while(i<n && j<m){
        if(a[i]<b[j]){
            ans.push_back(a[i]);
            i++;
        }else{
            ans.push_back(b[j]);
            j++;
        }
    }
    while(i<n){
        ans.push_back(a[i]);
        i++;
    }
    while(j<m){
        ans.push_back(b[j]);
        j++;
    }
    for(auto it:ans){
        cout<<it<<" ";
    }
    cout<<nl;

    
    
}

int main() {
    fast_io();
    solve();
    return 0;
}