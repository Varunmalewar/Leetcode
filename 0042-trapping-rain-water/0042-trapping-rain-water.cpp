class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int st = 0;
        int end = n-1;

        int leftmax = 0;
        int rightmax = 0;
        int totalwater = 0;

        while(st < end){
            leftmax = max(leftmax, height[st]);
            rightmax= max(rightmax , height[end]);

            if(leftmax < rightmax){
                totalwater = totalwater + leftmax - height[st];
                st++;
            }
            else{
                totalwater = totalwater + rightmax - height[end];
                end--;
            }
        }
        return totalwater;
    }
};