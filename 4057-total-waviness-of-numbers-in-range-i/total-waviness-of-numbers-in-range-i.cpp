class Solution {
public:
    int totalWaviness(int nums1, int nums2) {
        int total = 0;
        for (int i = nums1; i <= nums2; i++) {
             int cnt=0;
            string s = to_string(i);
            for (int j = 1; j < s.size() - 1; j++) {
              
                if ((s[j] > s[j - 1] && s[j] > s[j + 1]) ||
                    (s[j] < s[j - 1] && s[j] < s[j + 1]))
                    {
                        cnt++;
                    }
            }
            total+=cnt;
        }
        return total;
    }
};