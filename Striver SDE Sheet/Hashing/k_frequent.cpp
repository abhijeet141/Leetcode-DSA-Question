#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>ans;
    int  *a = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int k;
    cin>>k;
    map<int,int>mp;
    for(int i = 0;i<n;i++){
        mp[a[i]]++;
    }
    while(k--){
    int max = INT_MIN;
    int ans1 = 0;
    for(auto it:mp){
        if(it.second >= max){
            max = it.second;
            ans1 = it.first;
        }
    }
    mp[ans1] = 0;
    ans.push_back(ans1);
}
for (int i = 0; i < ans.size(); i++)
{
    cout<<ans[i]<<" ";
}

}