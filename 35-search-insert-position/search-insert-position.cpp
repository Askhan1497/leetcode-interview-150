class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        int ans, j;
        for(int i =0; i < n; i++)
        {
            if(nums[i] == target){
                ans = i;
                return ans;
            }
        }
        for(j =0; j<n; j++){
            if(nums[j] > target){
                ans = j;
                break;
            }
        }
        if(j == n)
        ans = n;
        return ans;

    }
};