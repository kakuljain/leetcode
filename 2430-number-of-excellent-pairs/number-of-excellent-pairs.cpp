class Solution {
public:
    long long countExcellentPairs(vector<int>& nums, int k) {
       set<int> st(nums.begin(), nums.end());
       unordered_map<int,int>mpp;
       for(int it:st)
       {
        mpp[__builtin_popcount(it)]++;
       }
        long long ans = 0;
        
        for(auto &a : mpp)
        {
            for(auto &b : mpp)
            {
                if(a.first + b.first >= k)
                {
                    ans += (long long)a.second * b.second;
                }
            }
        }
        
        return ans;
    }
};