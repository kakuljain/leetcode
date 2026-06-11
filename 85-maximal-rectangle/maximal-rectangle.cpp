class Solution {
public:

    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        int ans = 0;

        stack<int> st;
        stack<int> s;

        vector<int> le(n);
        vector<int> ri(n);

        for (int i = 0; i < n; i++) {
            while (!st.empty() && heights[st.top()] >= heights[i]) {
                st.pop();
            }

            if (st.empty())
                le[i] = -1;
            else
                le[i] = st.top();

            st.push(i);
        }

        for (int i = n - 1; i >= 0; i--) {
            while (!s.empty() && heights[s.top()] >= heights[i]) {
                s.pop();
            }

            if (s.empty())
                ri[i] = n;
            else
                ri[i] = s.top();

            s.push(i);
        }

        for (int i = 0; i < n; i++) {
            int width = ri[i] - le[i] - 1;
            ans = max(ans, heights[i] * width);
        }

        return ans;
    }

    int maximalRectangle(vector<vector<char>>& matrix) {

        if(matrix.empty()) return 0;

        int n = matrix.size();
        int m = matrix[0].size();

        vector<int> heights(m, 0);

        int ans = 0;

        for (int i = 0; i < n; i++) {

            for (int j = 0; j < m; j++) {

                if (matrix[i][j] == '1')
                    heights[j]++;
                else
                    heights[j] = 0;
            }

            ans = max(ans, largestRectangleArea(heights));
        }

        return ans;
    }
};