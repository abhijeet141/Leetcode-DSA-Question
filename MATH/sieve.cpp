#include<bits/stdc++.h>
using namespace std;

void isSieve(int n){
    vector<bool>isPrime(n+1,true);
    for(int i = 2;i*i<=n;i++){
        if(isPrime[i]){
            for(int j = 2*i;j<=n;j=j+i){
                isPrime[j] = false;
            }
        }
    }
    int count = 0;
    for(int i = 2;i<n;i++){
        if(isPrime[i]){
            count++;
        }
    }
    cout<<count;
}

int main(){
    int n;
    cin>>n;
    isSieve(n);
}