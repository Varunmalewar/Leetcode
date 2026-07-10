class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& mat) {

        int m = mat.size();
        int n = mat[0].size();

        int srow = 0;
        int erow = m - 1;
        int scol = 0;
        int ecol = n - 1;

        vector<int> ans;

        while (srow <= erow && scol <= ecol) {

            // Top
            for (int j = scol; j <= ecol; j++)
                ans.push_back(mat[srow][j]);

            // Right
            for (int i = srow + 1; i <= erow; i++)
                ans.push_back(mat[i][ecol]);

            // Bottom
            if (srow < erow) {
                for (int j = ecol - 1; j >= scol; j--)
                    ans.push_back(mat[erow][j]);
            }

            // Left
            if (scol < ecol) {
                for (int i = erow - 1; i >= srow + 1; i--)
                    ans.push_back(mat[i][scol]);
            }

            srow++;
            erow--;
            scol++;
            ecol--;
        }

        return ans;
    }
};