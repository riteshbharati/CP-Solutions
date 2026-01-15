#include <bits/stdc++.h>
using namespace std;

#define fast_io() ios::sync_with_stdio(false); cin.tie(nullptr)
#define ll long long
#define nl "\n"

void solve(ll arr[],ll n) {
    ll sum = 0;
    for(ll i=1;i<n;i++){
        if(arr[i]<arr[i-1]){
            sum+= (arr[i-1] - arr[i]);
            arr[i] = arr[i-1];
        }
    } 
    cout<<sum;   
    
    
}

int main() {
    fast_io();
    ll n;
    cin>>n;
    ll arr[n];
    for(ll i=0;i<n;i++){
        cin>>arr[i];
    }
    solve(arr,n);
    return 0;
}
