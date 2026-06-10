class Solution {
public:
    int maximumScore(vector<int>& nums, int k) {
        int n = nums.size();
        stack<int> st;
        stack<int> s;
        vector<int> l(n);
        vector<int> r(n);
        int ans=0;
        for (int i = 0; i < n; i++) {
            while (!st.empty() && nums[st.top()] >= nums[i]) {
                st.pop();
            }
            if (st.empty()) {
                l[i] = -1;}
            else {
                l[i] = st.top();
            }
            st.push(i);}
            for (int i = n-1; i >=0; i--) {
                while (!s.empty() && nums[s.top()] >= nums[i]) {
                    s.pop();
                }
                if (s.empty()) {
                    r[i] = n;
                } else {
                    r[i] = s.top();
                }
                s.push(i);
            }
            for(int i=0;i<n;i++)
            {
                if(l[i]+1<=k&&k<=r[i]-1)
                {
                    int len=r[i]-l[i]-1;
                    int s=nums[i]*len;
                    ans=max(ans,s);
                }
                
            }
        return ans;
    }
};