class Solution {
public:
    
    int first_occurence(vector<int>& arr, int target){
         int first = -1;
        int start = 0, end = arr.size() - 1;
        while(start<=end){
            int mid = start + (end - start)/2;
            if(arr[mid] == target){
                first = mid;
                end = mid - 1;
            }
            else if(target<arr[mid]){
                end = mid - 1;
            }
            else{
                start = mid + 1;
            }
        }
        return first; 
    }
    
     int last_occurence(vector<int>& arr, int target){
           int last = -1;
        int start = 0, end = arr.size() - 1;
        while(start<=end){
            int mid = start + (end - start)/2;
            if(arr[mid] == target){
                last = mid;
                start = mid + 1;
            }
            else if(target<arr[mid]){
                end = mid - 1;
            }
            else{
                start = mid + 1;
            }
        }
        return last; 
    }
    vector<int> searchRange(vector<int>& arr, int target) {
        int first = first_occurence(arr,target);
        int last = last_occurence(arr,target);
        return {first, last};
    }
};