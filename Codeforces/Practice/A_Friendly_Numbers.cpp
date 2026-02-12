#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define nl "\n"
#define yes "YES\n"
#define no "NO\n"

int digitSum(int n){
    int sum = 0;
    while(n){
        int rem = n%10;
        sum+=rem;
        n/=10;
    }
    return sum;
}

void solve() {
   int x;
   cin>>x;
   int count = 0;
   for(int i=x;i<x+100;i++){
        if(i-digitSum(i)==x){
            count++;
        }
   }
   cout<<count<<nl;
    
    
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