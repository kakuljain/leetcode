class Solution {
public:
    long long getDescentPeriods(vector<int>& prices) {
        int n=prices.size();
        long long len=1,ans=0;
        for(int i=1;i<n;i++)
        {
            if(prices[i-1]-prices[i]==1)
            {
                len+=1;
            }
            else 
            {
                len=1;
            }
            ans+=len;
            
        }
        return ans+1;
    }
};