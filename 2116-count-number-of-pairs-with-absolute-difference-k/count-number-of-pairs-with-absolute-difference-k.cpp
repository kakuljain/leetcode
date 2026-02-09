class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        unordered_map<int,int> mpp;
        int cnt = 0;

        for (int x : nums) {
            if (mpp.count(x - k))
                cnt += mpp[x - k];

            if (mpp.count(x + k))
                cnt += mpp[x + k];

            mpp[x]++;
        }
        return cnt;
    }
};
