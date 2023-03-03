// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    //arr1,arr2 : the arrays
    // n, m: size of arrays
    //Function to return a list containing the union of the two arrays. 
    vector<int> findUnion(int a1[], int a2[], int n, int m)
    {
        vector<int>ans;
        // set<int>set;
        // for(int i = 0;i<n;i++){
        //     set.insert(a1[i]);
        // }
        // for(int j=0;j<m;j++){
        //     set.insert(a2[j]);
        // }
        // for(auto it:set){
        //     ans.push_back(it);
        // }
        // return ans;
        // map<int,int>mp;
        // for(int i= 0;i<n;i++){
        //     mp[a1[i]] += 1;
        // }
        // for(int i = 0;i<m;i++){
        //     mp[a2[i]] += 1;
        // }
        // for(auto it: mp){
        //     ans.push_back(it.first);
        // }
        // return ans;
        int i = 0, j = 0;
        while(i < n and j < m){
            if(a1[i]<=a2[j]){
                if(ans.size() == 0 or ans.back()!=a1[i]){
                    ans.push_back(a1[i]);
                }
                i++;
            }
            else{
                 if(ans.size() == 0 or ans.back()!=a2[j]){
                    ans.push_back(a2[j]);
                }
                j++;
            }
        }
        while(i<n){
             if(ans.size() == 0 or ans.back()!=a1[i]){
                    ans.push_back(a1[i]);
                }
                i++;
        }
        while(j<m){
             if(ans.size() == 0 or ans.back()!=a2[j]){
                    ans.push_back(a2[j]);
                }
                j++;
        }
   return ans;
    }
};

// { Driver Code Starts.

int main() {
	
	int T;
	cin >> T;
	
	while(T--){
	    
	    
	    
	    int N, M;
	    cin >>N >> M;
	    
	    int arr1[N];
	    int arr2[M];
	    
	    for(int i = 0;i<N;i++){
	        cin >> arr1[i];
	    }
	    
	    for(int i = 0;i<M;i++){
	        cin >> arr2[i];
	    }
	    Solution ob;
	    vector<int> ans = ob.findUnion(arr1,arr2, N, M);
	    for(int i: ans)cout<<i<<' ';
	    cout << endl;
	    
	}
	
	return 0;
}  // } Driver Code Ends