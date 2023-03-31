#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int * a = new int[n];
    for(int i = 0;i<n;i++){
        cin>>a[i];
    }
    int low = 0, mid = 0, high = n - 1;
    while(mid<=high){
        if(a[mid] == 0){
            swap(a[mid],a[low]);
            mid++;
            low++;
        }
        else if(a[mid] == 1){
            mid++;
        }
        else if(a[mid] == 2){
            swap(a[mid],a[high]);
            high--;
        }
    }
    for(int i = 0;i<n;i++){
        cout<<a[i]<<" ";
    }
}