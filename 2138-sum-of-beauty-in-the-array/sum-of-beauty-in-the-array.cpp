class Solution {
public:
    int sumOfBeauties(vector<int>& nums) {
        int n=nums.size();
        vector<int>prefix(n);
        vector<int>suffix(n);
        int ans=0;
        prefix[0]=nums[0];
        for(int i=1;i<n;i++)
        {
            prefix[i]=max(prefix[i-1],nums[i]);
        }
        suffix[n-1]=nums[n-1];
        for(int i=n-2;i>=0;i--)
        {
            suffix[i]=min(suffix[i+1],nums[i]);
        }
        for(int i=1;i<n-1;i++)
        {
            if(prefix[i-1]<nums[i]&&nums[i]<suffix[i+1])
            {
                ans+=2;
            }
            else if(nums[i-1]<nums[i]&&nums[i]<nums[i+1])
            {
                ans+=1;
            }
        }
        return ans;
    }
};