class Solution {

public:

    set<vector<int>>s;
    void getsum(vector<int>&arr, int index ,vector<int>&output, int n , int target, vector<vector<int>>&ans){
        if(target == 0){
            if(s.find(output) == s.end()){
                ans.push_back({output});
                s.insert(output);
            }
            return;
        }
        if(index == n) return;
        if(target<0) return;

        output.push_back(arr[index]);
        //single inclusion 
        getsum(arr,index+1,output,n , target-arr[index],ans);

        //multiple inclusion 
        getsum(arr,index ,output, n ,target - arr[index],ans);

        //excluion 
        output.pop_back();
        getsum(arr,index+1,output,n,target,ans);
    }


    vector<vector<int>> combinationSum(vector<int>& arr, int target) {
       vector<vector<int>>ans;
       vector<int>output;
       int n = arr.size();
       int index = 0;
       getsum(arr,index,output,n,target,ans);
       return ans ;


    }
};