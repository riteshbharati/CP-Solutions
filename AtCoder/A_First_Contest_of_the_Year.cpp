#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);

typedef long long ll;

int main() {
    fastio;

    // your code here
    int D,F;
    cin>>D>>F;
    int ans = F;
    while(1){
        ans+=7;
        if(ans>D){
            cout<<(ans-D)<<endl;
            break;
        }

    }

    return 0;
}
