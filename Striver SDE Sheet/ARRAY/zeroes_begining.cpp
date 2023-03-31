#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int*a = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int i = n - 1;
    for(int j = n - 1;j>=0;j--){
        if(a[j]!=0){
            swap(a[i],a[j]);
            i--;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout<<a[i];
    }
}