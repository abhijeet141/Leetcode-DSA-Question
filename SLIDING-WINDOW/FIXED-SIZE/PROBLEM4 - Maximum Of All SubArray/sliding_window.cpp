#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,max = INT_MIN;
    cin>>n;
    int * a = new int[n];
    for(int i = 0;i < n; i++){
        cin>>a[i];
    }
    queue<int>q;
    vector<int>ans;
    int k;
    cin>>k;
    int i = 0, j = 0;
    while(j<n){
        //calculation
        while(q.size()>0 and q.back()<a[j]){
            q.pop();
        }
        q.push(a[j]);
        if(j - i + 1 < k){
            j++;
        }
        else if(j - i + 1 == k){
            //calculate ans
            ans.push_back(q.front());
            //Slide
            if(a[i] == q.front()){
                q.pop();
            }
            i++;
            j++;
        }
    }
    for(auto it: ans){
        cout<<it;
    }
}