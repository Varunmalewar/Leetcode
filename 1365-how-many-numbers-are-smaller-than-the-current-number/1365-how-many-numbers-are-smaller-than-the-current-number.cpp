class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int>sortedvalue(nums);
        sort(sortedvalue.begin(),sortedvalue.end());

        unordered_map<int,int>m;

        for(int i = 0; i < sortedvalue.size(); i++){
            if(m.find(sortedvalue[i]) == m.end()){
                m[sortedvalue[i]] = i;
            }
        }

        vector<int>result(nums.size());

        for(int i = 0; i< nums.size(); i++){
            result[i] = m[nums[i]];
        }

        return result;
        

    }
};