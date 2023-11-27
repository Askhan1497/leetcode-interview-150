#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {
        return haystack.find(needle);
    }
};

int main() {
    Solution solution;

    // Example usage
    string haystack = "sadbutsad";
    string needle = "sad";
    
    int result = solution.strStr(haystack, needle);

    // Display the result
    cout << "Index of needle in haystack: " << result << endl;

    return 0;
}
