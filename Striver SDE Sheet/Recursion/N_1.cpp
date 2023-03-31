#include<bits/stdc++.h>
using namespace std;

int recursion(int n){
    if(n == 0){
        return 0;
    }
    cout<<n<<" ";
    recursion(n - 1);
}

int main(){
    int n;
    cin>>n;
    recursion(n);
}