#include<bits/stdc++.h>
using namespace std;

bool isOperator(char c){
    if((c == '+') or (c == '-') or (c == '*') or (c == '/')){
        return true;
    }
    else{
        return false;
    }
}

bool hashigherprecedence(char op1 , char op2){
    if((op1 == '+' and op2 == '-') || (op1=='*' and op2 == '-') || (op1 == '/' and op2 == '-') || (op1 == '*' and op2 == '+') || (op1 == '/' and op2 == '+') || (op1 == '/' and op2 == '-') || (op1 == '/' and op2 == '*')){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    string s,res = "";
    cin>>s;
    stack<char>st;
    for(int i = 0;i<s.length();i++){
        if(!isOperator(s[i])){
            res = res + s[i];
        }
        else if(isOperator(s[i])){
            while(!(st.empty()) and hashigherprecedence(st.top(),s[i])){
                res = res + st.top();
                st.pop();
            }
            st.push(s[i]);
        }
    }
    while(!st.empty()){
        res = res + st.top();
        st.pop();
    }
    cout<<res;
}