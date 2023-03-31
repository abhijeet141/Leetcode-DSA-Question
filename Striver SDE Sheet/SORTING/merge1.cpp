#include<bits/stdc++.h>
using namespace std;

void merge(int *a, int start, int mid, int end){
    int left = start;
    int right = mid + 1;
    vector<int>temp;
    while(left<=mid and right<=end){
        if(a[left]<=a[right]){
            temp.push_back(a[left]);
            left++;
        }
        else{
            temp.push_back(a[right]);
            right++;
        }
    }
    while(left<=mid){
        temp.push_back(a[left]);
        left++;
    }
    while(right<=mid){
        temp.push_back(a[right]);
        right++;
    }
    for (int i = start; i <= end; i++)
    {
        a[i] = temp[i - start];
    }
}

void merge_sort(int *a, int start, int end){
    int mid = start + (end - start)/2;
    if(start>=end){
        return;
    }
    merge_sort(a,start,mid);
    merge_sort(a,mid + 1,end);
    merge(a,start,mid,end);
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
    merge_sort(a,start,end);
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    
}