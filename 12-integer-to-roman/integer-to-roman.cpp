class Solution {
public:
    string intToRoman(int num) {
        string roman = "";
        vector<pair<int, string>> umap = {
            {1000, "M"},
            {900, "CM"},
            {500, "D"},
            {400, "CD"},
            {100, "C"},
            {90, "XC"},
            {50, "L"},
            {40, "XL"},
            {10, "X"},
            {9, "IX"},
            {5, "V"},
            {4, "IV"},
            {1, "I"}
        };
        for(int i =0; i < umap.size(); i++)
        {
            while(num >= umap[i].first)
            {
                roman += umap[i].second;
                num -= umap[i].first;
            }
        }
        return roman;
    }
};