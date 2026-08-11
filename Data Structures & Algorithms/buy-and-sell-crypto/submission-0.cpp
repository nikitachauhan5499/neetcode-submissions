class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini = INT_MAX;
        int profit = 0;
        for (int x : prices) {
            mini = min(mini, x);
            profit = max(profit, x - mini);
        }
        return profit;
    }
};
