#include<bits/stdc++.h>
using namespace std;

int main(){
    string s1,s2;
    cin>>s1>>s2;
    string res = "";
    vector<string>anagram;
    anagram.push_back(s2);
    int n = s2.length();
    for(int i = 0;i<n;i++){
        int j = i + 1;
        while(j<n){
            res = res + s2[j];
            j++;
        }
        res += s2[i];
    }
}