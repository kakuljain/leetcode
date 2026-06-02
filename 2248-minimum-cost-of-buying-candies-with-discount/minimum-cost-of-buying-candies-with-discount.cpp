class Solution {
public:
    int minimumCost(vector<int>& cost) {
        sort(cost.begin(), cost.end(), greater<int>());
        int sum = 0, k = 0;
        for (int i = 0; i < cost.size(); i++) {
            k++;
            if (k == 3) {

                k = 0;
            } else {
                sum += cost[i];
            }
        }
        return sum;
    }
};