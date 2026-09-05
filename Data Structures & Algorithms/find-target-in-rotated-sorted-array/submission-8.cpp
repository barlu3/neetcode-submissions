class Solution {
public:
    int search(vector<int>& nums, int target) {
        int lower = 0;
        int upper = nums.size() - 1;
        if (lower == upper && nums[lower] == target) return 0;

        while (lower <= upper) {
            int mid = (lower + upper) / 2;
            
            if (nums[mid] == target) return mid;

            if (nums[lower] <= nums[mid]) {
                if (target >= nums[lower] && target < nums[mid]) {
                    upper = mid - 1;
                }
                else {
                    lower = mid + 1;
                }
            }
            else {
                if (target > nums[mid] && target <= nums[upper]) {
                    lower = mid + 1;
                }
                else {
                    upper = mid - 1;
                }
            }
        }
        return -1;
    }
};
