class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n = gas.size();
        int ans = 0;         
        int total = 0;     

        for(int i = 0; i < n; i++) {
            total += gas[i] - cost[i];
            if(total < 0) {
                ans = i + 1; 
                total = 0;  
            }
        }

        int sumGas = 0, sumCost = 0;
        for(int i = 0; i < n; i++) {
            sumGas += gas[i];
            sumCost += cost[i];
        }

        if(sumGas < sumCost) return -1;  
        return ans;                       
    }
};
