#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != val) {
                nums[k++] = nums[i];
            }
        }
        return k;
    }
};

int main() {
    Solution solution;

    // Example usage:
    vector<int> nums = {3, 2, 2, 3};
    int val = 3;

    int newLength = solution.removeElement(nums, val);

    // Output the modified vector and its new length
    cout << "Modified Vector: ";
    for (int i = 0; i < newLength; i++) {
        cout << nums[i] << " ";
    }
    cout << "\nNew Length: " << newLength << endl;

    return 0;
}
