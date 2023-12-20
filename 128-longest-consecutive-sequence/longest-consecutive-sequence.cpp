class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int, bool> mp;
        for (auto i : nums) {
            mp[i] = true;
        }
        
        for (auto i : nums) {
            if (mp.find(i - 1) != mp.end()) {
                mp[i] = false;
            }
        }
        
        int count = 0;
        
        for (int i = 0; i < nums.size(); i++) {
            if (mp[nums[i]]) {
                int j = 0;
                
                while(mp.count(nums[i]+j) > 0){
                    j++;
                }
                
                count = max(count, j);
            }
        }
        
        return count;
    }
};