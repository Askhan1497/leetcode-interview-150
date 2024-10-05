class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map <int, int> mp;
        int size = nums.size();
        for(int i = 0; i <size; i++){
            mp[nums[i]]++;
        }

        for(auto val : mp){
            if(val.second > size/2){
                return val.first;
            }
        }
        return -1;
    }
};