#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>ans;
    int *a = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int k;
    cin>>k;
    for(int i = 0;i<=n - k;i++){
        for(int j = i; j<i + k;j++){
            if(a[j]<0){
                ans.push_back(a[j]);
                break;
            }
            if(j == (i + k - 1)){
                if(a[j]>0){
                    ans.push_back(0);
                }
            }
        }
    }
    for (auto it: ans)
    {
        cout<<it<<" ";
    }
    

}