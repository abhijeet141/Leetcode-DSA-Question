#include<bits/stdc++.h>
using namespace std;

// class Stack{
//     private:
//     int top;
//     char A[101];
//     public :
//     void push(int x);
//     void pop();
//     int top();
//     bool isEmpty();
// };

string reverse(string s){
    stack<char>st;
    int n = s.length();
    for (int i = 0; i < n; i++)
    {
        st.push(s[i]);
    }
    for(int i = 0;i<n;i++){
        s[i] = st.top();
        st.pop();
    }
    return s;
}

int main(){
    string s;
    getline(cin,s);
    string ans = reverse(s);
    cout<<ans;
}