#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,p;
    cin>>n;
    int *a = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    cin>>p;
    map<int,int>mp;
    for(int i = 0;i<n;i++){
        mp[a[i]] += 1;
    }
    int q = 1;
    int i = 0;
    while(q<=n){
        a[i] = mp[q];
        q++;
        i++;
    }
    for (int i = 0; i < n; i++)
    {
        cout<<a[i];
    }
    

}