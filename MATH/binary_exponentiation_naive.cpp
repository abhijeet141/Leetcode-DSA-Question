#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int base,n;
        cin>>base>>n;
        int ans = 1;
        for(int i = 1;i<=n;i++){
            ans = ans * base;
        }
        cout<<ans<<endl;
    }
}