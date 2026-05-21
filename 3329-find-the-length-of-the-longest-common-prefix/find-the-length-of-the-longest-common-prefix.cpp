class Solution {
public:
    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {

        unordered_map<int, int> mpp1;
        unordered_map<int, int> mpp2;

        int n = arr1.size();
        int m = arr2.size();

        for (int i = 0; i < n; i++) {
            int nums = arr1[i];

            while (nums > 0) {
                mpp1[nums]++;
                nums = nums / 10;
            }
        }

        for (int i = 0; i < m; i++) {
            int nums = arr2[i];

            while (nums > 0) {
                mpp2[nums]++;
                nums = nums / 10;
            }
        }

        int ans = 0;

        for (auto it : mpp1) {
            if (mpp2.find(it.first) != mpp2.end()) {
                int len = to_string(it.first).size();
                ans = max(ans, len);
            }
        }

        return ans;
    }
};