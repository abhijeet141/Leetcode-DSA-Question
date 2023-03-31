#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a,index;
    vector<int>nums;
    for (int i = 0; i < n; i++)
    {
        cin>>a;
        nums.push_back(a);
    }
    int x = 10000;
        for(int i = 0;i<nums.size();i++){
            if(nums[i]<x){
                index = i;
                x = nums[i];
            }
    }
    cout<<index<< " "<< x;
}