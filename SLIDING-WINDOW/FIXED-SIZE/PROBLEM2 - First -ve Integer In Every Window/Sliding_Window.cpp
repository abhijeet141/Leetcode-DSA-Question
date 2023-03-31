#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>ans;
    queue<int>q;
    int *a = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int k;
    cin>>k;
    int i = 0, j = 0;
    while(j<n){
        //calculation
        if(a[j]<0){
            q.push(a[j]);
        }
        if((j - i + 1) < k){
            //when window size is not hit just increment the window
            j++;
        }
        else if((j - i + 1) == k){
            //when window size is hit calculate ans and slide
            if(q.empty()){
                ans.push_back(0);
            }
            else{
            ans.push_back(q.front());//calculate ans
            if(a[i] == q.front()){
                q.pop();
            }
            }
            i++;
            j++;
        }
    }
    for(auto it: ans){
        cout<<it;
    }
}