class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // int i = 0;
        // vector<int>ans;
        // int n = nums.size() -1;

        // while(i <= n){
        //     if(ans.size()>0 && nums[i] == ans[ans.size()-1] ){
        //         i++;
        //     }
        //     else{
        //         ans.push_back(nums[i]);
        //         i++;
        //     }
        // }
        // return ans.size();

        int i = 0;
        int idx = 0;

        int  n = nums.size() -1;

        while(i <= n){
            if(idx > 0 && nums[i] == nums[idx-1]){
                i++;
            }
            else{
                nums[idx] = nums[i];
                idx++;
                i++;
            }
        }
        return idx;
    }
};