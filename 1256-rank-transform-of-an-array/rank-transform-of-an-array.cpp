class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        unordered_map<int,int>mpp;
        set<int>st;
        vector<int>copy=arr;
        vector<int>ans;
        sort(copy.begin(),copy.end());
        for(auto it:copy)
        {
            st.insert(it);
        }int rank=1;
        for(auto it:st)
        {
            mpp[it]=rank;
            rank++;
        }
        for(auto it:arr)
        {
            ans.push_back(mpp[it]);
        }
        return ans;
    }
};