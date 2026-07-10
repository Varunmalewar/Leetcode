class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int target) {
        int row = 0 ;
        int n = mat[0].size();
        int m = mat.size();
        int col = n - 1;

        while( col>= 0 && row <= m-1){
            if(target == mat[row][col]){
                return true;
            }
            else if(target < mat[row][col]){
                col--;
            }
            else{
                row++;
            }
        }
        return false;

    }
};