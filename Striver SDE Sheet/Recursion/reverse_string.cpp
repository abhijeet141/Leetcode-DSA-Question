#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin,s);
    transform(s.begin(),s.end(),s.begin(), ::tolower);
        string s1 = "";
        for(int i = 0;i<s.length();i++){
        if(s[i]>='a' and s[i]<='z'){
            s1.push_back(s[i]);
        }
        else{
            continue;
        }
        }
        cout<<s1<<endl;
        int start = 0,end = s1.length() - 1;
        while(start<=end){
            if(s1[start] != s1[end]){
                cout<<false;
                break;
            }
            else if(s1[start] == s1[end]){
                start++;
                end--;
            }
        }
        if(start>=end){
            cout<<"true";
        }
}