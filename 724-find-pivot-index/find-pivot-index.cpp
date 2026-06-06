class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        int ls = 0, rs = 0, j = 0;
        vector<int> prefix(n);
        prefix[0] = nums[0];
        for (int i = 1; i < n; i++) {
            prefix[i] = prefix[i - 1] + nums[i];
        }
        int ts = prefix[n - 1];
        while (j < n) {
            if (j == 0) {
                ls = 0;
                rs = ts - prefix[0];
            } else
                {ls = prefix[j - 1];
            rs = ts - prefix[j];}
            if (ls == rs) {
                return j;
            }
            j++;
        }
        return -1;
    }
};