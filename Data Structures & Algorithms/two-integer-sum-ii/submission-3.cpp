class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n = static_cast<int>(numbers.size());
        int left = 0, right = n-1;
        while (left < right) {
            int candidate = numbers[left] + numbers[right];
            if (candidate == target) {
                return {left + 1, right + 1};
            }
            else if (candidate > target) {
                right--;
            }
            else {
                left++;
            }
        }
        return {};
    }
};
