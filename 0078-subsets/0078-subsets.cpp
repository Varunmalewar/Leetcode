class Solution {
public:
    void getsubsets(vector<int>& nums,vector<int> &output, int index ,  vector<vector<int>> &allsubsets ){
        if(index >= nums.size()){
            allsubsets.push_back({output});
            return;
        }

        output.push_back(nums[index]);
        getsubsets(nums,output,index+1,allsubsets);

        output.pop_back();
        getsubsets(nums,output,index+1,allsubsets);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>allsubsets;
        vector<int>output;
        int index = 0;

        getsubsets(nums,output,index,allsubsets);

        return allsubsets;
    }
};