class Solution {
public:
    int missingInteger(vector<int>& nums) {
        unordered_set<int>st;
        int ans=0;
        for(auto it:nums)
        {
            st.insert(it);
        } ans=nums[0];
        int j=1;
        while(j<nums.size())
        {   
            if(nums[j]==nums[j-1]+1)
            {
                ans+=nums[j];
            }
            else {break;}
            j++;
        }
        while(st.find(ans)!=st.end())
        {
            ans++;
        }
        return ans;
    }
};