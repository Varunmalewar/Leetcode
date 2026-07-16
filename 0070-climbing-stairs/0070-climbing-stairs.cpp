class Solution {
public:
    int climbStairs(int n) {
        // // base case 
        if( n == 0) return 1;
        if( n == 1) return 1;

        // return climbStairs(n-1) + climbStairs(n-2);
        
        int prevnum = 1;
        int currnum = 1;
        int ans = 0;

        for(int i = 2; i <= n; i++){
            ans = prevnum + currnum;
            prevnum = currnum;
            currnum = ans;
        }
        return ans;
    }
};