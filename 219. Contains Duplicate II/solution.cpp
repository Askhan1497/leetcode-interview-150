#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                if (nums[i] == nums[j] && abs(i - j) <= k) {
                    return true;
                }
            }
        }
        return false;
    }
};

int main() {
    Solution solution;

    // Example usage
    vector<int> nums = {1, 2, 3, 1, 2, 3};
    int k = 2;

    bool result = solution.containsNearbyDuplicate(nums, k);

    // Display the result
    if (result) {
        cout << "There are nearby duplicates within the given range." << endl;
    } else {
        cout << "No nearby duplicates within the given range." << endl;
    }

    return 0;
}


/*
219. Contains Duplicate II
Easy
5.7K
2.9K
Companies
Given an integer array nums and an integer k, return true if there are two distinct indices i and j in the array such that nums[i] == nums[j] and abs(i - j) <= k.

 

Example 1:

Input: nums = [1,2,3,1], k = 3
Output: true
Example 2:

Input: nums = [1,0,1,1], k = 1
Output: true
Example 3:

Input: nums = [1,2,3,1,2,3], k = 2
Output: false
 

Constraints:

1 <= nums.length <= 105
-109 <= nums[i] <= 109
0 <= k <= 105

*/