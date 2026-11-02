class Solution {
public:
    int maximumCandies(vector<int>& candies, long long k) {
        int ans=0,l=1,h=*max_element(candies.begin(),candies.end());
        while(l<=h)
        {
            int mid=l+(h-l)/2;
            long long s=0;
            for(auto x:candies)
            {
                s+=x/mid;
            }
            if(s>=k)
            {
                ans=mid;
                l=mid+1;
            }
            else if(s<k)
            {
                h=mid-1;
            }
        }
        return ans;
    }
};