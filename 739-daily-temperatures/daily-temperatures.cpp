class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
        int n=temp.size();
       stack<int>st;
       vector<int>ans(n,0);
       for(int i=0;i<n;i++)

       {
         while(!st.empty()&&temp[i]>temp[st.top()])
         {
                int s=st.top();
                st.pop();
                ans[s]=i-s;
       }
       st.push(i);
       }
       return ans;
    }
};