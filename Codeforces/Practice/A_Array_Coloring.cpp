#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define nl "\n"

void solve() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bool isPossible = true;
    for(int i=1;i<n;i++){
        if((arr[i-1]%2==0 && arr[i]%2==0) || (arr[i-1]%2==1 && arr[i]%2==1)){
            isPossible = false;
        }
    }
    if(isPossible){
        cout<<"YES\n";
    } else{
        cout<<"NO\n";
    }
    
    
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