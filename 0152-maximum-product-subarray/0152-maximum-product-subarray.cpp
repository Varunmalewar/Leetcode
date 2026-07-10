class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int curprod = 1;
        int maxi = INT_MIN;
        for(int i = 0; i< nums.size(); i++){
            curprod *= nums[i];
            maxi = max(curprod , maxi);
            if(curprod == 0){
                curprod =1;
            }
        }
            curprod = 1;
            for(int i = nums.size() -1 ; i>=0;i--){
                curprod *= nums[i];
                maxi = max(curprod,maxi);
                if(curprod == 0){
                    curprod = 1;
                }
            }
          

            


        return maxi;
            
    }
};