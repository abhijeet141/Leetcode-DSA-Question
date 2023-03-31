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
    unordered_map<int,int>mp;
    for (int i = 0; i < n; i++)
    {
        mp[arr[i]] += 1;
    }
    
    int q;
    cin>>q;
    while(q--){
        int number;
        cin>>number;
        //fetching
        cout<<mp[number]<<" " ;
    }
}