class Solution {
public:
    vector<int> smallestRange(vector<vector<int>>& nums) {
        int k = nums.size();

        vector<pair<int, int>> arr;

        for (int i = 0; i < k; i++) {
            for (auto x : nums[i]) {
                arr.push_back({x, i});
            }
        }

        sort(arr.begin(), arr.end());

        vector<int> freq(k, 0);

        int cnt = 0;
        int l = 0;

        int start = 0, end = INT_MAX;

        for (int r = 0; r < arr.size(); r++) {

            if (freq[arr[r].second] == 0)
                cnt++;

            freq[arr[r].second]++;

            while (cnt == k) {

                if (arr[r].first - arr[l].first < end - start ||
                    (arr[r].first - arr[l].first == end - start &&
                     arr[l].first < start)) {
                    start = arr[l].first;
                    end = arr[r].first;
                }

                freq[arr[l].second]--;

                if (freq[arr[l].second] == 0)
                    cnt--;

                l++;
            }
        }

        return {start, end};
    }
};