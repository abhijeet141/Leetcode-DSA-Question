#include<bits/stdc++.h>
using namespace std;

int main(){
    int m,n;
    cin>>m;
    cin>>n;
    int *a = new int [m];
    int *b = new int [n];
    for(int i = 0;i<m;i++){
        cin>>a[i];
    }
    for(int i = 0;i<n;i++){
        cin>>b[i];
    }
    int i = 0,j = 0;
    while(i<m and j<n){
        if(a[i]<b[j]){
            cout<<a[i++];
        }
        else{
            cout<<b[j++];
        }
    }
    while(i<m){
        cout<<a[i++];
    }
    while(j<n){
        cout<<b[j++];
    }
}