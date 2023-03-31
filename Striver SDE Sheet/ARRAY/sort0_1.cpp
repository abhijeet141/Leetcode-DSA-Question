#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int * a = new int[n];
    for(int i = 0;i<n;i++){
        cin>>a[i];
    }
    int low = 0, high = n - 1;
    while(low<high){
        if(a[low] == 0){
            low++;
        }
        if(a[low] == 1){
            if(a[high] == 1){
                high--;
            }
            else{
                swap(a[low],a[high]);
            }
        }
    }
    for(int i = 0;i<n;i++){
        cout<<a[i]<<" ";
    }
}