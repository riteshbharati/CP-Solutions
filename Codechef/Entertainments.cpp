#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);

typedef long long ll;

int main() {
    fastio;

    int N;
    cin >>N;
    if(N<=5){
        cout << N*200 <<endl;
    }else{
        cout << 1000 <<endl;
    }

    return 0;
}
