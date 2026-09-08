class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> sol;
        int n = static_cast<int>(numbers.size());
        size_t left = 0, right = n-1;
        while (left < right) {
            int candidate = numbers[left] + numbers[right];
            if (candidate == target) {
                sol.push_back(++left);
                sol.push_back(++right);
                break;
            }
            else if (candidate > target) {
                right--;
            }
            else {
                left++;
            }
        }
        return sol;
    }
};
