#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,r;
    cin>>n>>r;
    int sum = 0,count = 0;
    int maxcount = 0;
    int *a = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    for (int i = 0; i < n; i++)
    {
        sum = 0,count = 0;
        for (int j = i; j < n; j++)
        {
            sum = sum + a[j];
            count++;
            if(sum == r){
                maxcount = max(count,maxcount);
            }
        }
    }
    cout<<maxcount;
}