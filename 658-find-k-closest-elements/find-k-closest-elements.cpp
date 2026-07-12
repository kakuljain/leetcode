class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        vector<pair<int,int>>st;
        vector<int>ans;
        for(int i=0;i<arr.size();i++)
        {
            st.push_back({abs(arr[i]-x), arr[i]});
        }
        sort(st.begin(),st.end());
        for(int i=0;i<k;i++)
        {
            ans.push_back(st[i].second);
           
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};