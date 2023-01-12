//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public:
    int evenlyDivides(int N){
        int digit = 0;
        int num = N;
        int rem = 0;
        while(num!=0){
            rem = num%10;
            num = num/10;
            if(rem == 0){
                continue;
            }
            if(N % rem == 0){
                digit++;
            }
        }
        return digit;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.evenlyDivides(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends