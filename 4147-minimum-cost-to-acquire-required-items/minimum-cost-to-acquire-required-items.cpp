class Solution {
public:
    long long minimumCost(int cost1, int cost2, int costboth, int need1, int need2) {
        long long costa = 1LL * cost1 * need1 + 1LL * cost2 * need2;

        long long costb = 1LL * max(need1, need2) * costboth;

        long long costc = 1LL * min(need1, need2) * costboth + 1LL * (need1 - min(need1, need2)) * cost1+ 1LL * (need2 - min(need1, need2)) * cost2;

        long long ans = min({costa, costb, costc});

        return ans;
    }
};