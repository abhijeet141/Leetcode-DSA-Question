#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    int sum = 0,max = INT_MIN;
    int *a = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    for(int i = 0;i<=k - 1;i++){
        sum = sum + a[i];
        max = sum;
    }
    int l= 0, r = k - 1;
    while(r <= n - 2){
        r++;
        sum = sum + a[r];
        sum = sum - a[l];
        l++;
        if(sum>max){
            max = sum;
        }
    }
    cout<<max;
}