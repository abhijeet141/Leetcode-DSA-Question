#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k,p;
    cin>>n>>k;
    vector<int>v;
    for (int i = 0; i < n; i++)
    {
        cin>>p;
        v.push_back(p);
    }
    int max = 0,sum = 0;
    for(int i = 0;i<=k - 1;i++){
        sum = sum + v[i];
    }
    max = sum;
    int l = 0, r = k - 1;
    while(r<=n - 2){
        r++;
        sum = sum + v[r];
        sum = sum - v[l];
        l++;
        if(max<sum){
            max = sum;
        }
    }
    cout<<max;
}