class Solution {
public:
    void getpermute(vector<int>& nums,vector<vector<int>>&ans,int index){
        if(index == nums.size()){
            ans.push_back({nums});
        }

        for(int i = index ; i< nums.size(); i++){
            swap(nums[index], nums[i]);
            getpermute(nums,ans,index+1);
            swap(nums[index],nums[i]);
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        int index = 0;
        getpermute(nums,ans,index);
        return ans;
    }
};