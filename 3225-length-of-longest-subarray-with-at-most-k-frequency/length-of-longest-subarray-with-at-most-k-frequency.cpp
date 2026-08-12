class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        unordered_map<int,int>mpp;
        int ans=0;
      int i=0,j=0;
      while(j<nums.size())
      {mpp[nums[j]]++;
        while(mpp[nums[j]]>k)
        {mpp[nums[i]]--;
        i++;

        }ans=max(ans,j-i+1);
        j++;
      }
        return ans;
    }
};