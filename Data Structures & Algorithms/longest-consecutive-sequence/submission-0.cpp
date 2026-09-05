class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> seen(nums.begin(), nums.end());
        int ans = 0;

        for (int v : seen) {
            if (seen.count(v - 1)) continue;

            int cur = v;
            int len = 1;
            while (seen.count(cur + 1)) { cur++; len++; }
            ans = max(ans, len);
        }
        return ans;
    }
};
