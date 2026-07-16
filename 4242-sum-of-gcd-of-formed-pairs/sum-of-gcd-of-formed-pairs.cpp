class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        int n = nums.size();
        vector<int> prefix(n);
        int mx = 0;
        long long ans = 0;
        for (int i = 0; i < nums.size(); i++) {
            mx = max(mx, nums[i]);
            prefix[i] =gcd(mx, nums[i]);
        }
        sort(prefix.begin(), prefix.end());
        int i = 0, j = prefix.size()-1;
        while (i < j) 
        {
            int sum=gcd(prefix[i],prefix[j]);
            ans+=sum;
            i++;j--;
        }
        return ans;
    }
};