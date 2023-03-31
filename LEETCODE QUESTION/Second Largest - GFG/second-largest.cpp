//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// Function returns the second
	// largest elements
	int print2largest(int a[], int n) {
	int res = -1, largest = -1;
// 	for(int i = 0;i<n;i++){
// 	    if(a[i]>largest){
// 	        largest = a[i];
// 	    }
// 	}
// 	for(int i=0;i<n;i++){
// 	    if(a[i] == largest){
// 	        continue;
// 	    }
// 	    else if(a[i]>res){
// 	        res = a[i];
// 	    }
// 	}
// 	return res;
for(int i = 0;i<n;i++){
    if(a[i]>largest){
        res = largest;
        largest = a[i];
    }
    else if(a[i]!=largest and res<a[i]){
        res = a[i];
    }
}
return res;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.print2largest(arr, n);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends