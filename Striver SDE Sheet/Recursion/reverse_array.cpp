#include<bits/stdc++.h>
using namespace std;

void reverse_array(int *a,int n, int size){
    if(size<0){
        return ;
    }
    cout<<a[size];
    reverse_array(a,n,size - 1);
}

int main(){
    int n;
    cin>>n;
    int size = n - 1;
    int * a = new int[n];
    for(int i = 0;i<n;i++){
        cin>>a[i];
    }
    reverse_array(a,n,size);
}