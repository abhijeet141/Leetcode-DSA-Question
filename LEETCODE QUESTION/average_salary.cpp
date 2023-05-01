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
    int maximum = INT_MIN,minimum = INT_MAX;
    for(int i = 0;i<n;i++){
        maximum = max(a[i],maximum);
        minimum = min(a[i],minimum);
    }
        int size = n - 2;
        int sum = 0;
        double average;
        for(int i = 0;i<n;i++){
            if(a[i] == maximum || a[i] == minimum){
                continue;
            }
            else{
                sum = sum + a[i];
            }
        }
        average = sum/size;
        cout<<sum;
}