#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);

typedef long long ll;

int main() {
    fastio;
    int T;
    cin>>T;
    while(T--){
        int n;
        cin>>n;
        int arr[n];
        int brr[n-1];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        for(int i=0;i<n-1;i++){
            brr[i] = arr[i] + arr[i+1];
        }
        sort(brr,brr+n-1);
        cout << brr[0] <<endl;

    }

    return 0;
}
