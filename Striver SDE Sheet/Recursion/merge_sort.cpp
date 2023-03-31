#include<bits/stdc++.h>
using namespace std;

void merge(int *a, int low, int mid, int high){
    // vector<int>temp;
    // int left = low;
    // int right = mid + 1;
    // while(left<=mid and right<=high){
    //     if(a[left]<=a[right]){
    //         temp.push_back(a[left]);
    //         left++;
    //     }
    //     else{
    //         temp.push_back(a[right]);
    //         right++;
    //     }
    // }
    // while(left<=mid){
    //     temp.push_back(a[left]);
    //     left++;
    // }
    // while(right<=high){
    //     temp.push_back(a[right]);
    //     right++;
    // }
    // for(int i = low;i<=high;i++){
    //     a[i] = temp[i - low];
    // }
    int left = low,right = mid + 1;
    vector<int>temp;
    while(left<=mid and right<=high){
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
    while(right<=high){
        temp.push_back(a[right]);
        right++;
    }
    for (int i = low; i <= high; i++)
    {
        a[i] = temp[i - low];
    }
}

void merge_sort(int *a, int low, int high){
    int mid = low + (high - low)/2;
    if(low >= high){
        return;
    }
    merge_sort(a,low,mid);
    merge_sort(a,mid+1,high);
    merge(a,low,mid,high);
}

int main(){
    int n;
    cin>>n;
    int * a = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int low = 0, high = n - 1;
    merge_sort(a,low,high);
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    
}