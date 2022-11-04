class Solution {
public:
    string reverseVowels(string s) {
        stack<char>st;
        for(auto x: s){
            if(x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u' || x == 'A' || x =='E' || x == 'I' || x == 'O' || x == 'U' ){
                st.push(x);
            }
        }
        for(int i = 0;i<s.length();i++){
            char x = s[i];
             if(x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u' || x == 'A' || x =='E' || x == 'I' || x == 'O' || x == 'U' ){
                s[i] = st.top();
                st.pop();
            }
        }
        return s;
    }
};