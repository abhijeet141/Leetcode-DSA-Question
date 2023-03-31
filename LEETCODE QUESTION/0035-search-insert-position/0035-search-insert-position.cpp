class Solution {
public:
    int searchInsert(vector<int>& arr, int target) {
        int start = 0, end = arr.size() - 1,res = arr.size();
        while(start<=end){
            int mid = start + (end - start)/2;
            if(arr[mid] == target){
                return mid;
            }
            else if(target<arr[mid]){
                res = mid;
                end = mid - 1;
            }
            else{
                start = mid + 1;
            }
        }
        return res;
    }
};