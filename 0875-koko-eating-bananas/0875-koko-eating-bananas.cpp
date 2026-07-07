class Solution {
public:

bool canfinish(vector<int> piles, int mid , int h){
    int sum = 0;
    for(int i= 0; i< piles.size(); i++){
        if(sum + ceil((double)piles[i]/mid) <= h){
            sum = sum + ceil((double)piles[i]/mid);
        }
        else{
            return false ;
        }
    }
    return true ;
}




    int minEatingSpeed(vector<int>& piles, int h) {
        int st = 1;
        int maxi = INT_MIN;

        for(int i = 0 ; i< piles.size(); i++){
            maxi = max(maxi,piles[i]);
        }
        int end = maxi;
        int ans = -1 ;

        while(st <= end){
            int mid = st+(end-st)/2;
            if(canfinish(piles,mid,h)){
                ans = mid;
                end = mid - 1;

            }
            else{
                st = mid + 1;
            }
        }
        return ans;
    }
};