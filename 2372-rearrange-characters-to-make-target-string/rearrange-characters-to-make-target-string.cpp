class Solution {
public:
    int rearrangeCharacters(string s, string target) {
        unordered_map<char,int>mpp;
        unordered_map<char,int>mpp1;
        int ans=INT_MAX;
        for(auto it:target)
        {
            mpp[it]++;
        }
        for(auto it:s)
        {
            if(mpp.find(it)!=mpp.end())
            {
                mpp1[it]++;
            }
        }
        for(auto it:mpp)
        {
            ans=min(ans,mpp1[it.first]/it.second);
        }
        return ans;
    }
};