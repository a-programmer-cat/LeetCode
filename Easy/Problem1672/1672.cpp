#include <algorithm>
class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        vector<int> people_amount = {};
        for (int customer = 0; customer < accounts.size(); customer++) {
            int amount = 0;
            for (int wealth = 0; wealth < accounts[customer].size(); wealth++) {
                amount += accounts[customer][wealth];
            }
            people_amount.push_back(amount);
        }
        return *max_element(people_amount.begin(), people_amount.end());
    }
};
