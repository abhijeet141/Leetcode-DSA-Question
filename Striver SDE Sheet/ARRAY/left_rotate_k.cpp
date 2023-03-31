#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    int * a = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    for(int i = 0;i<k; i++){
            int end = a[n - 1];
            for(int i = n - 2;i>=0;i--){
               a[i + 1] = a[i]; 
            }
            a[0] = end;
        }
}