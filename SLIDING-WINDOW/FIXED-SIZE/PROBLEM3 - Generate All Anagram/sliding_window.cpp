#include<bits/stdc++.h>
using namespace std;

int main(){
    string s1,s2;
    cin>>s1>>s2;
    int ans = 0;
    int n = s1.length();
    map<char,int>mp;
    int k = s2.length();
    for(int l = 0;l<k;l++){
        mp[s2[l]] += 1;
    }
    int count = mp.size();
    int i = 0, j = 0;
    while(j<n){
        if(mp.find(s1[j]) != mp.end()){
            mp[s1[j]]--;
            if(mp[s1[j]] == 0){
                count--;
            }
        }
        if(j - i + 1 < k){
            j++;
        }
        else if(j - i +1 == k){
            if(count == 0){
                ans++;
            }
            if(mp.find(s1[i]) != mp.end()){
                mp[s1[i]]++;
            if(mp[s1[i]] == 1){
                count++;
            }
            }
            i++;
            j++;
        }
    }
    cout<<ans;
}


// class Solution {
// public:
//     vector<int> findAnagrams(string s, string p) {
//         vector<int>ans;
//         int n = s.length();
//         int k = p.length();
//         map<char,int>mp;
//         for(int l = 0;l<k;l++){
//             mp[p[l]]++;
//         }
//         int count = mp.size();
//         int i = 0, j = 0;
//         while(j<n){
//             if(mp.find(s[j]) != mp.end()){
//                mp[s[j]]--;
//                if(mp[s[j]] == 0){
//                    count--;
//                } 
//             }
//             if(j - i + 1 < k){
//                 j++;
//             }
//             else if(j - i + 1 == k){
//                 if(count == 0){
//                     ans.push_back(i);
//                 }
//                 if(mp.find(s[i]) != mp.end()){
//                     mp[s[i]]++;
//                     if(mp[s[i]] == 1){
//                         count++;
//                     }
//                 }
//             }
//         }
//         return ans;
//     }
// };