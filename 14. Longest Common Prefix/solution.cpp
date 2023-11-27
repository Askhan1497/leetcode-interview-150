#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = "";
        sort(strs.begin(), strs.end());
        if (strs.size() > 0) {
            int n = strs.size();
            string first = strs[0];
            string last = strs[n - 1];
            for (int i = 0; i < min(first.size(), last.size()); i++) {
                if (first[i] != last[i]) {
                    return ans;
                }
                ans += first[i];
            }
            return ans;
        }
        return "";
    }
};

int main() {
    Solution solution;

    // Example usage
    vector<string> strings = {"flower", "flow", "flight"};
    string result = solution.longestCommonPrefix(strings);

    // Display the result
    cout << "Longest common prefix: " << result << endl;

    return 0;
}
