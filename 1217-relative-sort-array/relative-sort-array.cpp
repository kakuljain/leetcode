class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        unordered_map<int,int>mpp;
        vector<int> tmp;
        vector<int>ans;
        for(auto it:arr1)
        {
            mpp[it]++;
        }
        for(auto it:arr2)
        {
            while(mpp[it]>0)
            {
                ans.push_back(it);
                mpp[it]--;
            }
        }
        for(auto it:mpp)
        {
            while(it.second>0)
            {tmp.push_back(it.first);
            it.second--;}
        }
        sort(tmp.begin(),tmp.end());
        for(auto it:tmp)
        {
            ans.push_back(it);
        }
        return ans;
    }
};