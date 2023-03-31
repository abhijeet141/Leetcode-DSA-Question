#include<bits/stdc++.h>
using namespace std;

void reverse(int *a,int l,int r){
    if(l>=r){
        return;
    }
    swap(a[l],a[r]);
    reverse(a,l+1,r-1);
}

int main(){
    int n;
    cin>>n;
    int *a = new int[n];
    int l = 0, r = n -1;
    for(int i = 0;i<n;i++){
        cin>>a[i];
    }
    reverse(a,l,r);
    for (int i = 0; i < n; i++)
    {
        cout<<a[i];
    }
    
}