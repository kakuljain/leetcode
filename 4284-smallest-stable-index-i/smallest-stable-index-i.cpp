class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n=nums.size();
        int ans=-1;
        for(int i=0;i<n;i++)
        {
            int ma=*max_element(nums.begin(),nums.begin()+i+1);
            int mi=*min_element(nums.begin()+i,nums.end());
            int j=ma-mi;
            if(j<=k)
            {
                ans=i;
                break;
            }
        }
        return ans;
    }
};