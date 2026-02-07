class Solution {
public:
    int minimumDeletions(string s) {
        int bCount = 0;
        int ans = 0;

        for(char c : s) {
            if(c == 'b') {
                bCount++;
            } else { 
                if(bCount > 0) {
                    ans = min(ans + 1, bCount);
                }
            }
        }
        return ans;
    }
};
