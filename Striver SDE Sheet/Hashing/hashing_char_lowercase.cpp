#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin,s);
    int hash_array[26] = {0};
    for (int i = 0; i < s.length(); i++)
    {
        hash_array[s[i] - 'a'] += 1;
    }
    int q;
    cin>>q;
    char chr;
    while(q--){
        cin>>chr;
        //fetching
        cout<<hash_array[chr - 'a']<<" ";
    }
    return 0;
}