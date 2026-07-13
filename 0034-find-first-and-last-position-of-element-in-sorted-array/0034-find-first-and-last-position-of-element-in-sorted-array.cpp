class Solution {
public:
    int firstoccurence(vector<int>& nums, int target) {
        int s = 0, e = nums.size() - 1;
        int ans = -1;                         // default: not found
        while (s <= e) {
            int mid = s + (e - s) / 2;
            if (nums[mid] == target) {
                ans = mid;                    // save candidate
                e = mid - 1;                  // keep searching left
            } else if (nums[mid] > target) {
                e = mid - 1;
            } else {
                s = mid + 1;
            }
        }
        return ans;
    }

    int lastoccurence(vector<int>& nums, int target) {
        int s = 0, e = nums.size() - 1;
        int ans = -1;
        while (s <= e) {
            int mid = s + (e - s) / 2;
            if (nums[mid] == target) {
                ans = mid;                    // save candidate
                s = mid + 1;                  // keep searching right
            } else if (nums[mid] > target) {
                e = mid - 1;
            } else {
                s = mid + 1;
            }
        }
        return ans;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        return {firstoccurence(nums, target), lastoccurence(nums, target)};
    }
};