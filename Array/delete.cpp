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
    int pos;
    cin>>pos;
    int idx = pos - 1;
    for (int i = idx + 1; i<n; i++)
    {
        a[i - 1] = a[i];
    }
    for(int i = 0;i<n - 1;i++){
        cout<<a[i]<<" ";
    }
}