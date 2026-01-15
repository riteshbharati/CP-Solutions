#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);

typedef long long ll;

int main() {
    fastio;
    int T;
    cin>>T;
    while(T--){
        int x,y;
        cin>>x>>y;
        cout <<(x+y)/2 <<" ";
        cout << (y-x)/2 <<endl;
    }

    return 0;
}
