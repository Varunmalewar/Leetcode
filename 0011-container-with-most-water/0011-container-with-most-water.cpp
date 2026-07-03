class Solution {
public:
    int maxArea(vector<int>& height) {

        // brute force 
        // int ans = INT_MIN;

        // for(int i = 0 ; i < height.size(); i++){
        //     for(int j = i+1 ; j<height.size(); j++){
        //         int width = j - i;

        //         int ht = min(height[i], height[j]);

        //         int area = width * ht ;

        //         ans = max(ans,area);
        //     }

        // }
        // return ans ;



        // two pointer approach 
        int i = 0 ;
        int j = height.size() - 1;
        int ans = INT_MIN;

        while(i < j){
            int width = j - i;
            int ht = min(height[i], height[j]);
            int area = width * ht;

            ans = max(ans , area);
            if(height[i]< height[j]){
                i++;
            }
            else{
                j--;
            }
           
            
            
        }
        return ans ;



        
    }
};