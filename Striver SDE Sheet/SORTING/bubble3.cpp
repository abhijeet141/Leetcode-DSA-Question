#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int *a = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    for(int itr = 1;itr<n - 1;itr++){
        for(int j = 0;j<n - 1;j++){
            if(a[j]>a[j + 1]){
                swap(a[j],a[j + 1]);
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    
}