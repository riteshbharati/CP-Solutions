#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    for(int i=0;i<t;i++){
        int temp = 0;
        int count = 0;
        int n;
        cin>>n;
        int a[n];
        for(int j=0;j<n;j++){
            cin>>a[j];
        }
        for(int j=0;j<n;j++){
            if(a[j]==0){
                count++;
            }
            if(a[j]<0){
                temp++;
            }
            }
            cout << count + 2*(temp%2) <<endl;
        
    }



    return 0;
}
