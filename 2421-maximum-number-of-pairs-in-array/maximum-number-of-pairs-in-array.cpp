class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        unordered_map<int,int>mpp;
        int cnt1=0,cnt2=0;
        vector<int>ans;
        for(auto x:nums)
        {
            mpp[x]++;
        }
        for(auto it:mpp)
        {
            cnt1+=it.second/2;
            cnt2+=it.second%2;}
            ans.push_back(cnt1);
            ans.push_back(cnt2);
            return ans;
    }
};