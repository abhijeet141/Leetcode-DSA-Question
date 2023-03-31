class Solution {
public:
    int findMin(vector<int>& a) {
        int n = a.size();
       int start = 0, end = n - 1;
	   while(start<=end){
	       int mid = start + (end - start)/2;
	       int next = (mid + 1)%n;
	       int prev = (mid + n - 1)%n;
	       if(a[start]<=a[end]){
	           return a[start];
	       }
	       else if(a[mid]<=a[next] and a[mid]<=a[prev]){
	           return a[mid];
	       }
	       else if(a[mid]<=a[end]){
	           end = mid - 1;
	       }
	       else if(a[start]<=a[mid]){
	           start = mid + 1;
	       }
	   }
	   return -1;
    }
};