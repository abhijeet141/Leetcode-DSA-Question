#include<bits/stdc++.h>
using namespace std;

void recursion(int i, int n){
    if(i>n){
        return;
    }
        cout<<i;
    recursion(i+1,n);
}

int main(){
    int n,i = 1;
    cin>>n;
    recursion(i,n);
}