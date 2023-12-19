class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> res;
        int n=nums.size();
        for(int i=0;i<n;i++){
            int s=nums[i];
            while(i+1<n && nums[i+1]==nums[i]+1){
                 i++;
            }
            if(s!=nums[i]){
                res.push_back(to_string(s)+ "->" + to_string(nums[i]));
            }
            else{
                res.push_back(to_string(s));
            }
        }
        return res;
    }
};