class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> mp;
        for(auto mg : magazine){
            mp[mg]++;
        }

        for(char ran : ransomNote){
            if(mp.find(ran) != mp.end() && mp[ran] > 0)
            {
                mp[ran]--;
            }
            else {
                return false;
            }
        }
        return true;
    }
};