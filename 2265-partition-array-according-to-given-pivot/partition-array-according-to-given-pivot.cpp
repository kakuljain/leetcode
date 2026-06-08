class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int>l,e,g;
        for(auto it:nums)
        {
            if(it<pivot)
            {
                l.push_back(it);
            }
            else if(it==pivot)
            {
                e.push_back(it);
            }
            else 
            {
                g.push_back(it);
            }

        }
        vector<int>ans;
        ans.insert(ans.end(),l.begin(),l.end());
        ans.insert(ans.end(),e.begin(),e.end());
        ans.insert(ans.end(),g.begin(),g.end());
        return ans;
    }
};