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
    for(int i = 0;i<n - 1;i++){
        int min_index = i;
        for(int j = i;j<n;j++){
            if(a[j]<a[min_index]){
                min_index = j;
            }
        }
        swap(a[min_index],a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    
}