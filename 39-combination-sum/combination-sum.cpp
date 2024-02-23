class Solution {
public:
    vector<vector<int>> ans;
    void help(vector<int> &c,int target,vector<int> &temp,int idx)
    {
        if(idx==c.size()){
            return;
        }
        if(target==0)
        {
            ans.push_back(temp);
            return;
        }
        if(target<0){
            return;
        }
        help(c,target,temp,idx+1);
        temp.push_back(c[idx]);
        help(c,target-c[idx],temp,idx);
        temp.pop_back();
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> temp;
        help(candidates,target,temp,0);
        return ans;
    }
};