class Solution {
public:
    int min_search(vector<int>& a,int n,int start,int end){
        while(start<=end){
            int mid = start + (end - start)/2;
            int next = (mid + 1)%n;
            int prev = (mid + n - 1)%n;
            if(a[start]<=a[end]){
                return start;
            }
            else if(a[mid]<=a[next] and a[mid]<=a[prev]){
                return mid;
            }
            else if(a[start]<=a[mid]){
                start = mid + 1;
            }
            else if(a[end]>=a[mid]){
                end = mid - 1;
            }
        }
        return -1;
    }
    
    int binary_search(vector<int>&a, int x, int n, int start,int end){
        while(start<=end){
            int mid = start + (end - start)/2;
            if(x == a[mid]){
                return mid;
            }
            else if(x<a[mid]){
                end = mid - 1;
            }
            else{
                start = mid + 1;
            }
        }
        return -1;
    }
    
    int search(vector<int>& arr, int x) {        
        int n = arr.size();
        int start = 0,end = n - 1;
        int min = min_search(arr,n,start,end);
        int left = binary_search(arr,x,n,start,min - 1);
        int right = binary_search(arr,x,n,min,end);
        if(left != -1 and right == -1){
            return left;
        }
        else if(left == -1 and right != -1){
            return right;
        }
        else{
            return -1;
        }
    }
};