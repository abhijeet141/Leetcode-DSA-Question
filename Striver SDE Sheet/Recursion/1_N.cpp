#include<bits/stdc++.h>
using namespace std;

int recursion_print(int n){
    if(n == 0){
        return 0;
    }
    recursion_print(n - 1);
    cout<<n<<" ";
}

int main(){
    int n;
    cin>>n;
    recursion_print(n);
}