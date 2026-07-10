class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n=nums.size();
        int i=0,r=0,cnt=0,len=0;
        while(r<n)
        {
            if(nums[r]==0)
            {
                cnt++;
            }
            while(cnt>1)
            {
                if(nums[i]==0)
                {
                    cnt--;
                    i++;
                }
                else i++;
            }
           
            len = max(len, r - i + 1);
            r++;
        }
        return len-1;
    }
};