class Solution {
public:
    int maxArea(vector<int>& heights) {
        int h = heights.size(), i = 0, j = h - 1, ans = 0;
        while (i < j) {
            ans = max(ans, min(heights[i], heights[j]) * (j-i));
            if (heights[i] < heights[j]) {
                i++;
            }
            else {
                j--;
            }
        }
        return ans;
    }
};
