#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    int *a = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    map<int,int>mp;
    int sum = 0, maxlen = 0;
    for(int i = 0;i<n;i++){
        sum = sum + a[i];
        if(sum == k){
            maxlen = max(maxlen,i+1);
        }
        int rem = sum - k;
        if(mp.find(rem) != mp.end()){
            int len = i - mp[rem];
            maxlen = max(maxlen,len);
        }
        if(mp.find(sum) == mp.end()){
            mp[sum] = i;
        }
    }
    cout<<maxlen;
}