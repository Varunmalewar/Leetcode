class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int totalgas = 0;
        int totalcost = 0;

        for(int i = 0; i< gas.size(); i++){
            totalgas = totalgas + gas[i];
        }
        for(int i = 0 ; i< cost.size(); i++){
            totalcost = totalcost + cost[i];
        }


        int start = 0;
        int curgas= 0;
        for(int i = 0; i< gas.size(); i++){
            curgas = curgas + gas[i] - cost[i];
            if(curgas < 0){
                start = i+1;
                curgas = 0;
            }
        }
        return (totalgas < totalcost) ? -1 : start;
    }
};