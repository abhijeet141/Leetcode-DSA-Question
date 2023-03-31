#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int *a = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int m;
    cin>>m;
    int sum = 0,count = 0;
    for(int i = 0;i<n;i++){
        for(int j = i;j<n;j++){
            sum = 0;
            for(int k = i;k<=j;k++){
                sum = sum + a[k];
            }
            cout<<endl;
            if(sum == m){
                count++;
            }
        }
    }
    cout<<count;
}