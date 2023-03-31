#include<bits/stdc++.h>
using namespace std;

   void reverse(int *a , int start, int end){
        while(start<=end){
            swap(a[start],a[end]);
            start++;
            end--;
        }
    }

int main(){
    int n,k;
    cin>>n>>k;
    int * a = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
        k = k%n;
        int start = 0;
        int end = n - 1;
        if(n == 1){
            return;
        }
        else{
        reverse(a,start,n - k - 1);
        reverse(a,n - k,end);
        reverse(a,start,end);
    }
}