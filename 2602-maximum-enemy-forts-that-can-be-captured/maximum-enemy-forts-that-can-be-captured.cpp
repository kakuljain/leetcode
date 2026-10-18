class Solution {
public:
    int captureForts(vector<int>& forts) {
        int n = forts.size();
        int cnt = 0, ans = 0;
        int prev = 0;

        for (int i = 0; i < n; i++) {
            if (forts[i] == 0) {
                cnt++;
            }
            else {
                if (prev != 0 && forts[i] != prev) {
                    ans = max(ans, cnt);
                }
                cnt = 0;
                prev = forts[i];
            }
        }

        return ans;
    }
};