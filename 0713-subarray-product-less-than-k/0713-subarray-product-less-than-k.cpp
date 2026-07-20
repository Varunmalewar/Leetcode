class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int left = 0;
        int prod = 1;
        int count = 0;
        for(int right = 0 ; right < nums.size() ; right++){
            prod = prod * nums[right];

            while(prod >= k && left <= right){
                prod = prod / nums[left];
                left++;
            }
            count = count +(right - left + 1);


        }
        return count;
    }
};