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

int Operation(int op1, int op2, char c){
    if(c == '+'){
        return op1+op2;
    }
    else if(c == '-'){
        return op1-op2;
    }
    else if(c == '*'){
        return op1*op2;
    }
    else if(c == '/'){
        return op1/op2;
    }
}

int main(){
    string s;
    cin>>s;
    stack<int>st;
    int op1,op2,res;
    for (int i = s.length() - 1; i >= 0 ; i--)
    {
        if(!isOperator(s[i])){
            s[i] = int(s[i] - '0');
            st.push(s[i]);
        }
        else{
            op1 = st.top();
            st.pop();
            op2 = st.top();
            st.pop();
            int res = Operation(op1,op2,s[i]);
            st.push(res);
        }
    }
    cout<<st.top();
}