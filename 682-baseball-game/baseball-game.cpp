class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int>st;
        int ans=0;
        for(auto it:operations)
        {
            if(it=="C")
            {
                st.pop();
            }
            else if(it=="D")
            {
                int k=2*st.top();
                
                st.push(k);
                
            }
            else if(it=="+")
            {
                int c=st.top();
                st.pop();
                int d=st.top();
                st.push(c);
                st.push(c+d);
               
            }
            else
            {
                st.push(stoi(it));
            }
        }
        while(!st.empty())
        {
            ans+=st.top();
            st.pop();
        }
        return ans;
    }
};