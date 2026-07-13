class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        int total = grid.size()*grid[0].size();
        vector<int>ans(total +1,0);

        for(int i = 0 ; i < m ; i++){
            for(int j = 0; j < n;j++){
                ans[grid[i][j]]++;
            }
        }
        int repeating = -1;
        int missing = -1;
        vector<int>answer;

        for(int i = 1; i< ans.size(); i++){
            if(ans[i] == 2){
                repeating = i;
            }
            else if(ans[i] == 0){
                missing = i;
            }
        }
        return {repeating , missing};
    }
};