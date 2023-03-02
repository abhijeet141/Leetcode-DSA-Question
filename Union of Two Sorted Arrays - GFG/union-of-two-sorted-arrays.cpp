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
        vector<int>temp;
        for(int i = 0;i<n;i++){
            temp.push_back(a1[i]);
        }
        for(int j=0;j<m;j++){
            temp.push_back(a2[j]);
        }
        set<int>set;
        for(int i=0;i<(m+n);i++){
            set.insert(temp[i]);
        }
        vector<int>ans;
        for(auto it:set){
            ans.push_back(it);
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