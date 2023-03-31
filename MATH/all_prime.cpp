#include <bits/stdc++.h>
using namespace std;

int isprime(int i){
    int count = 0;
    for(int j = 2; j*j<=i;j++){
        if(i%j == 0){
            count++;
        }
    }
    if(count == 0){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    int n,k;
    cin>>n>>k;
    int sum = 0,ans = 0;
    for(int i = 2;i<=n;i++){
        if(isprime(i)){
            if(ans == 0){
                sum = sum + i;
            }
            if(ans == (k+1)){
                sum = sum + i;
            }
            ans++;
        }
    }
    cout<<sum;
}