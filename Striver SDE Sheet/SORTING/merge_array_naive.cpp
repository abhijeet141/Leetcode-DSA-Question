#include<bits/stdc++.h>
using namespace std;

int main(){
    int m,n;
    cin>>m;
    int *a = new int [m];
    int *b = new int [n];
    int *c = new int[m + n];
    for(int i = 0;i<m;i++){
        cin>>a[i];
    }
    cin>>n;
    for(int i = 0;i<n;i++){
        cin>>b[i];
    }
    for(int i = 0; i<m;i++){
        c[i] = a[i];
    }
    for (int i = 0; i < n; i++)
    {
        c[i + m] = b[i];
    }
    sort(c,c+(m + n));
    for (int i = 0; i < (m+n); i++)
    {
        cout<<c[i]<<" ";
    }
    
    
}