#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,p,ans;
    cin>>n;
    vector<int>a;
    for (int i = 0; i < n; i++)
    {
        cin>>p;
        a.push_back(p);
    }
    int i = 0;
    for (int j = 1; i < n; i++)
    {
        if(a[i] != a[j]){
            i++;
            a[i] = a[j];
        }
    }
    
}