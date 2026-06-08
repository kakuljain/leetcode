class Solution {
public:
    int maxProfit(vector<int>& p) {
        int n = p.size();
        int ans = 0, mi = p[0], ma = 0;
        for (int i = 1; i < n; i++) {

            ma = p[i ] - mi;
            ans = max(ans, ma);
            mi = min(mi, p[i]);
        }
        return ans;
    }
};