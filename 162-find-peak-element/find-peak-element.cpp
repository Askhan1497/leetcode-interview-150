class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int i=0, n = nums.size()-1;
        while(i<n){
            int mid = (i+n)/2;
            if(nums[mid] > nums[mid +1]) 
                n = mid;
            else
                i = mid + 1;
            
        }
        return i;
    }
};