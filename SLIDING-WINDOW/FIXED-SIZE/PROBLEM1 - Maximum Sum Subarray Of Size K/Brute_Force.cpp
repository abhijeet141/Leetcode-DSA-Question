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
    for (int i = 0; i <= n-k; i++)
    {
        sum = 0;
        for(int j = i;j < i+k; j++){
            sum = sum + a[j];
        }
        if(sum>max){
            max = sum;
        }
    }
    cout<<max;
}