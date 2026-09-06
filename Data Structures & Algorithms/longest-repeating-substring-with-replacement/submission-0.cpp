class Solution {
public:
    int characterReplacement(string s, int k) {
        int cnt[26] = {0};
        int left = 0, best = 0, maxfrq = 0;
        int n = s.size();
        for (int right = 0; right < n; right++) { 
            maxfrq = max(maxfrq, ++cnt[s[right]-'A']);
            if ((right - left + 1) - maxfrq > k) {
                --cnt[s[left] - 'A'];
                ++left;
            }
            best = max(best, right - left + 1);
        }
        return best;
    }
};
