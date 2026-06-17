class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> c = nums;
        sort(c.begin(),c.end());
        unordered_map<int, int> mpp;
        vector<int> ans;
        for (int i=0;i<c.size();i++ ) {
            if (mpp.find(c[i]) == mpp.end()) {
                mpp[c[i]] = i;
            } 
        }
        for (auto it:nums) {

            ans.push_back(mpp[it]);
        }
        return ans;
    }
};