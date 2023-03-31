#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    //precompute
    int hash_array[13] = {0};
    for(int i=0;i<n;i++){
        hash_array[arr[i]] += 1;
    }
    int q;
    cin>>q;
    while(q--){
        int number;
        cin>>number;
        //fetching
        cout<<hash_array[number]<<" " ;
    }
}