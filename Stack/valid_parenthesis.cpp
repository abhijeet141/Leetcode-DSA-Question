#include<bits/stdc++.h>
using namespace std;

bool ispair(char opening, char closing){
    if(opening == '[' and closing == ']'){
        return true;
    }
    else if(opening=='(' and closing == ')'){
        return true;
    }
    else if(opening=='{' and closing == '}'){
        return true;
    }
    else{
        return false;
    }
}

bool isValid(string s){
    stack<char>st;
     for (int i = 0; i < s.length(); i++)
    {
        if((s[i] == '[') || (s[i] == '(') || (s[i] == '{')){
            st.push(s[i]);
        }
        else{
            if(st.empty() || !(ispair(st.top(),s[i]))){
                return false;
            }
            else{
                st.pop();
            }
        }
    }
    if(st.empty()){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    string s;
    cin>>s;
    cout<<isValid(s);
}