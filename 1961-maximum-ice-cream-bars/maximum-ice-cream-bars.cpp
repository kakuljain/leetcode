class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        int s = 0;
        int cnt = 0;

        sort(costs.begin(), costs.end());

        for (auto it : costs) {
            s += it;
            if (s > coins)
                return cnt;
            cnt++;
        }

        return cnt;
    }
};