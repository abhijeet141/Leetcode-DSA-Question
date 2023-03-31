#include<bits/stdc++.h>
using namespace std;

bool isOperand(char c){
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
    for(int i = 0; i<s.length();i++){
    if(!(isOperand(s[i]))){
        s[i] = int((s[i] - '0'));
        st.push(s[i]);
    }
    else{
        op2 = st.top();
        st.pop();
        op1 = st.top();
        st.pop();
        res = Operation(op1,op2,s[i]);
        st.push(res);
    }
  }
  cout<<st.top();
}