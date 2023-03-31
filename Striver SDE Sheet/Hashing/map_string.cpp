#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin,s);
    unordered_map<char,int>mp;
    for (int i = 0; i < s.length(); i++)
    {
        mp[s[i]] += 1;
    }
    int q;
    cin>>q;
    char chr;
    while(q--){
        cin>>chr;
        //fetching
        cout<<mp[chr]<<" ";
    }
    return 0;
}