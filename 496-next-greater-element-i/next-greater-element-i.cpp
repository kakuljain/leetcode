class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n=nums2.size();
        stack<int>st;
        unordered_map<int,int>mpp;
        vector<int>ans;
        for(int i=0;i<n;i++)
        {   while(!st.empty() && st.top()<nums2[i])
         {  int c=st.top();
            st.pop();
            mpp[c]=nums2[i];
             }
            st.push(nums2[i]);
        }
        while(!st.empty())
        {
            mpp[st.top()]=-1;
            st.pop();
        }
        for(auto it:nums1)
        {
               ans.push_back(mpp[it]);
            
        }
        return ans;
    }
};