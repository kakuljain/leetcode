class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        int ans = INT_MIN;
        stack<int> st;
        stack<int> s;
        vector<int> le(n);
        vector<int> ri(n);
        
        for (int i = 0; i < n; i++) {
            while (!st.empty() && heights[st.top()] >= heights[i]) {

                st.pop();
            }
            if (st.empty()) {
                le[i]=-1;
            } else {
                le[i]=st.top();
            }
            st.push(i);
        }
        for (int i = n - 1; i >= 0; i--) {
            while (!s.empty() && heights[s.top()] >= heights[i]) {

                s.pop();
            }
            if (s.empty()) {
                ri[i]=n;
            } else {
                ri[i]=s.top();
            }
            s.push(i);
        }
        for (int i = 0; i < n; i++) {
            int s = ri[i] - le[i]-1;
            ans = max(ans, heights[i] * s);
        }
        return ans;
    }
};