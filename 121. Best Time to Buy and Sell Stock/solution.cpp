#include <iostream>
#include <vector>
#include <climits> // for INT_MAX

using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int l = INT_MAX;
        int op = 0;
        int pist = 0;

        for (int i = 0; i < prices.size(); i++) {
            if (prices[i] < l) {
                l = prices[i];
            }
            pist = prices[i] - l;
            if (op < pist) {
                op = pist;
            }
        }
        return op;
    }
};

int main() {
    // Create an instance of the Solution class
    Solution solution;

    // Create a vector of integers
    vector<int> prices = {7, 1, 5, 3, 6, 4};

    // Call the maxProfit function
    int result = solution.maxProfit(prices);

    // Print the result
    cout << "Maximum profit: " << result << endl;

    return 0;
}
