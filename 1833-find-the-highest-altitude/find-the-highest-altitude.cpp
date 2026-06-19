class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n=gain.size();
        vector<int>prefix(n);
        int ans=0;
        prefix[0]=gain[0];
        for(int i=1;i<n;i++)
        {
            prefix[i]=prefix[i-1]+gain[i];
        }
        for(auto it:prefix)
        {
            ans=max(ans,it);
        }
        return ans;
    }
};