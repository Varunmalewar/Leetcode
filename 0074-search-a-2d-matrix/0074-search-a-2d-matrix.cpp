class Solution {
public:

    bool searchmatrix(vector<vector<int>>& matrix, int target, int row ){
        int n = matrix[0].size();

        int st = 0;
        int end = n-1;

        while(st <= end){
            int mid = st + (end - st)/2;
            if( target == matrix[row][mid]){
                return true;
            }
            else if (target > matrix[row][mid]){
                st = mid +1 ;
            }
            else{
                end = mid -1 ;
            }
        }
        return false;
    }

    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        // BS on total number of rows 
        int m = matrix.size(), n = matrix[0].size();

        int startrow = 0  ; int endrow = m - 1;

        while(startrow <= endrow){
            int midrow = startrow + (endrow - startrow)/2;

            if(target >= matrix[midrow][0] && target <= matrix[midrow][n-1]){
                // found the row => BS on this row 
                return searchmatrix(matrix, target , midrow);

            }
            else if( target >= matrix[midrow][n-1]){
                // downward jana hai 
                startrow = midrow + 1;
            }
            else{
                // up wala direction 
                endrow = midrow -1 ;
            }
        }
        return false;
    }
};