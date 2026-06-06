class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        int n=nums.size();
        vector<long long>prefix(n);
        long long cnt=0,ls=0,rs=0,j=0;
        prefix[0]=nums[0];
        for(int i=1;i<n;i++)
        {
            prefix[i]=prefix[i-1]+nums[i];
        }
         long long ts=prefix[n-1];
        while(j<n-1)
        {if(j==0)
        {
            ls=prefix[j];
            rs=ts-prefix[j];

        }
        else
        {
            ls=prefix[j];
            rs=ts-prefix[j];
            
        }
        if(ls>=rs)
        {
            cnt++;
        }j++;
    }
        return cnt;
    }
};