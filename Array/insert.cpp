#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[100];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int insert,pos;
    cin>>insert>>pos;
    int idx = pos - 1;
    for (int i = n - 1; i>=idx; i--)
    {
        a[i + 1] = a[i];
    }
    a[idx] = insert;
    for(int i = 0;i<=n;i++){
        cout<<a[i]<<" ";
    }
}