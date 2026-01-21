#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define nl "\n"

void solve() {
    int a,b;
    cin>>a>>b;
    int c,d;
    cin>>c>>d;
    int temp;
    int tmp;
    int x = min(a,b);
    int y = min(c,d);
    int z = max(a,b);
    if(x==a){
        temp = b;
    }else{
        temp = a;
    }
    if(y==c){
        tmp = d;
    }else{
        tmp = c;
    }
  
    if((x+y)==z && tmp == temp){
        cout<<"Yes\n";
    }else cout<<"No\n";
    
    
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