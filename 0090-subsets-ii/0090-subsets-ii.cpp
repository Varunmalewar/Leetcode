class Solution {
public:
    void getsubsets(vector<int>&nums, vector<int>&output, int index, vector<vector<int>> &ans){
        if(index == nums.size()){
            ans.push_back({output});
            return;
        }

        // inclusion 
        output.push_back(nums[index]);
        getsubsets(nums,output,index + 1,ans);

        output.pop_back();

        //check karo babiyo
        int p = index + 1;
        while(p < nums.size() && nums[p]== nums[p-1]){
            p++;
        }
        getsubsets(nums,output,p,ans );
    }


    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
       sort(nums.begin(),nums.end());
       vector<vector<int>> ans ;
       vector<int>output;
       int index = 0;
       getsubsets(nums,output,index,ans);

       return ans;
    }
};