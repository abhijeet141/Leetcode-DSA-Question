#include<bits/stdc++.h>
using namespace std;

void recursion(int n, int ans){
    if(n == 0){
        cout<<ans;
        return;
    }
    recursion(n - 1,ans + (n*n*n));
}

int main(){
    int n,sum = 0;
    cin>>n;
    recursion(n,sum);
}