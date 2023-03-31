#include<bits/stdc++.h>
using namespace std;

int partition(int *a, int start, int end){
    int pivot = a[end];
    int partiton = start;
    for (int i = start; i < end; i++)
    {
        if(a[i]<=pivot){
            swap(a[i],a[partiton]);
            partiton++;
        }
    }
    swap(a[end],a[partiton]);
    return partiton;
}

void quick_sort(int *a, int start, int end){
    if(start>=end){
        return;
    }
    int pivot_index = partition(a,start,end);
    quick_sort(a,start,pivot_index - 1);
    quick_sort(a,pivot_index + 1, end);
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