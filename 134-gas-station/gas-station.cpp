class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int total = 0;
        int curr = 0;
        int st = 0;

        int n = gas.size();
        for(int i=0; i<n; i++){
            total += gas[i] - cost[i];
            curr += gas[i] - cost[i];

            if(curr < 0){
                st = i + 1;
                curr = 0;
            } 
        }
        if(total < 0){
            return -1;
        }
        return st;
    }
};