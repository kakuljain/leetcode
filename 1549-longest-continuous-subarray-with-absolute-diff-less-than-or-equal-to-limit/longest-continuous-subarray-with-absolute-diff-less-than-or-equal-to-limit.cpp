class Solution {
public:
    int longestSubarray(vector<int>& nums, int limit) {
        deque<int> ma, mi;  
        int l = 0;
        int ans = 0;

        for (int r = 0; r < nums.size(); r++) {

           
            while (!ma.empty() && nums[ma.back()] < nums[r]) {
                ma.pop_back();
            }
            ma.push_back(r);

            
            while (!mi.empty() && nums[mi.back()] > nums[r]) {
                mi.pop_back();
            }
            mi.push_back(r);

           
            while (nums[ma.front()] - nums[mi.front()] > limit) {

                if (ma.front() == l)
                    ma.pop_front();

                if (mi.front() == l)
                    mi.pop_front();

                l++;
            }

            
            ans = max(ans, r - l + 1);
        }

        return ans;
    }
};