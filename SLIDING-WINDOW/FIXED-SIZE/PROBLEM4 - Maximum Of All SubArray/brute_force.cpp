#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,max = INT_MIN;
    cin>>n;
    int *a = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    vector<int>ans;
    int k;
    cin>>k;
    for(int i = 0;i<=n-k;i++){
        for(int j = i;j<i + k;j++){
            if(a[j]>max){
                max = a[j];
            }
        }
        ans.push_back(max);
    }
    for(auto it: ans){
        cout<<it<<" ";
    }
}