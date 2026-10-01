class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>mpp;
        int i=0;
        long long sum=0,ans=0;
        for(int r=0;r<nums.size();r++)
           {mpp[nums[r]]++;
           sum+=nums[r];
            while(mpp[nums[r]]>1)
            {
                mpp[nums[i]]--;
                sum-=nums[i];
                i++;
            }
            while(r-i+1>k)
            {   mpp[nums[i]]--;
                sum-=nums[i];
                i++;
            }
            if(r-i+1==k)
            ans=max(ans,sum);
        }
        return ans;
    }
};