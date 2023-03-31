#include<bits/stdc++.h>
using namespace std;

bool isprime(int n){
    int count = 0;
    for(int i = 2; i*i<=n;i++){
        if(n%i == 0){
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
    int n;
    cin>>n;
    for(int i = 2;i<=n;i++){
        if(isprime(i)){
            cout<<i<<" ";
        }
    }
}