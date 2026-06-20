class Solution {
public:
    int minPairSum(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int s=0;
        for(int i=0;i<n/2;i++)
        {
            s=max(s,(nums[i]+nums[n-1-i]));
        }
        return s;
    }
};