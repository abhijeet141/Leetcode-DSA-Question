#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int * a = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int temp = a[0];
    for(int i = 1;i<n;i++){
        a[i - 1] = a[i];
    }
    a[n - 1] = temp;
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    
}