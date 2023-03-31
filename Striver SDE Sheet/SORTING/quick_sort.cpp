#include<bits/stdc++.h>
using namespace std;

int partition(int *a, int start, int end){
    // int pivot = a[end];
    // int partition_index = start;
    // for (int i = start; i < end; i++)
    // {
    //     if(a[i]<=pivot){
    //         swap(a[i],a[partition_index]);
    //         partition_index++;
    //     }
    //     else if(a[i]>pivot){
    //         swap(a[i],a[partition_index]);
    //         partition_index++;
    //     }
    // }
    // swap(a[partition_index],a[end]);
    // return partition_index;
    int pivot = a[end];
    int partition_index = start;
    for(int i = start;i<end;i++){
        if(a[i]<=pivot){
            swap(a[i],a[partition_index]);
            partition_index++;
        }
    }
    swap(a[end],a[partition_index]);
    return partition_index;
}

void quick_sort(int *a, int start, int end){
    if(start<end){
    int partition_index = partition(a,start,end);
    quick_sort(a,start,partition_index - 1);
    quick_sort(a,partition_index + 1,end);
    }
}

int main(){
    int n;
    cin>>n;
    int *a = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int start = 0, end = n - 1;
    quick_sort(a,start,end);
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
}