#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);

typedef long long ll;


int main() {
    fastio;
    ll n;
    cin>>n;
    ll arr[n-1];
    for(int i=0;i<n-1;i++){
        cin>>arr[i];
    }
    ll ans = 0;
    for(int i =1;i<=n;i++){
        ans^=i;
    }
    for(int j=0;j<n-1;j++){
        ans^=arr[j];
    }
    cout<<ans<<"\n";
    return 0;
}
