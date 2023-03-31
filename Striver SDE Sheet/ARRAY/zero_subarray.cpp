#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int count = 0,count1 = 0;
    int *a = new int[n];
    for(int i = 0;i<n;i++){
        cin>>a[i];
    }
     for(int i = 0;i<n;i++){
           for(int j = i;j<n;j++){
            count = 0;
               for(int k = i;k<=j;k++){
                if(a[k] == 0){
                    count++;
                    if(j - i + 1 == count){
                        count1++;
                    }
                }
               }
           }
       }
       cout<<count1;
}