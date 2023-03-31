#include<bits/stdc++.h>
using namespace std;

int power(int base, int n){
    long long int ans = 1;
    while(n != 0){
        if(n%2 != 0){
            ans = ans * base;
            n = n - 1;
        }
        else{
            n = n/2;
            base = base * base;
        }
    }
    return ans;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        long long int base,n;
        cin>>base>>n;
        cout<<power(base,n);
    }
}