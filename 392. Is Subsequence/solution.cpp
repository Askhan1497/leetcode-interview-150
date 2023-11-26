#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    bool isSubsequence(string s, string t) {
        if (s.length() > t.length()) {
            return false;
        }

        int n = s.length(), m = t.length();
        int j = 0;
        for (int i = 0; i < m && j < n; i++) {
            if (s[j] == t[i]) {
                j++;
            }
        }
        return (j == n);
    }
};

int main() {
    Solution solution;

    // Example usage
    string subsequence = "abc";
    string target = "ahbgdc";

    bool result = solution.isSubsequence(subsequence, target);

    // Display the result
    if (result) {
        cout << "The string is a subsequence." << endl;
    } else {
        cout << "The string is not a subsequence." << endl;
    }

    return 0;
}

/*
392. Is Subsequence
Easy
9.1K
487
Companies
Given two strings s and t, return true if s is a subsequence of t, or false otherwise.

A subsequence of a string is a new string that is formed from the original string by deleting some (can be none) of the characters without disturbing the relative positions of the remaining characters. (i.e., "ace" is a subsequence of "abcde" while "aec" is not).

 

Example 1:

Input: s = "abc", t = "ahbgdc"
Output: true
Example 2:

Input: s = "axc", t = "ahbgdc"
Output: false
 

Constraints:

0 <= s.length <= 100
0 <= t.length <= 104
s and t consist only of lowercase English letters.
 

Follow up: Suppose there are lots of incoming s, say s1, s2, ..., sk where k >= 109, and you want to check one by one to see if t has its subsequence. In this scenario, how would you change your code?
*/