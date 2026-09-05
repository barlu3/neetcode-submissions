class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min_price = prices[0];
        int max_profit = 0;

        for (int i = 1; i < prices.size(); i++) {
            int profit = prices[i] - min_price;
            max_profit = max(max_profit, profit);
            min_price = min(min_price, prices[i]);
        }

        return max_profit;
        // int left = 0;
        // int right = prices.size() -1;
        // int max_profit = 0;
        // while (right > left) {
        //     // if (prices.at(left) == prices.at(right)) right--;
        //     // if (prices[right]-prices[left] > max_profit) max_profit = prices[right]-prices[left];
        //     max_profit = (prices[right] - prices[left] > max_profit) ? prices[right] - prices[left] : max_profit;
        //     if (prices.at(right) < prices.at(right - 1)) right--;
        //     if (prices.at(left)  > prices.at(right) || prices.at(left + 1) < prices.at(left)) left++;
        // }
        // return max_profit;
    }
};
