#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define nl "\n"
#define yes "YES\n"
#define no "NO\n"

void solve() {
    int a,b;
    cin>>a>>b;
    if(a%b==0 || b%a==0){
        cout<<"Multiples\n";
    }else{
        cout<<"No Multiples\n";
    }
    
    
}

int main() {
    fastio;
    solve();
    return 0;
}