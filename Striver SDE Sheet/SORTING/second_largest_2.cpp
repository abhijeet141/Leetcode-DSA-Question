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
    int res = 0, largest = 0;
    for (int i = 0; i < n; i++)
    {
        if(a[i]>largest){
            res = largest;
            largest = a[i];
        }
        else if(a[i]!=largest and a[i]>res){
            res = a[i];
        }
    }
    cout<<largest<<" "<<res;
}