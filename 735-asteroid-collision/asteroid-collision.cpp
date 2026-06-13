class Solution {
public:
    vector<int> asteroidCollision(vector<int>& as) {
        vector<int>ans;
        stack<int>st;
        for(int i=0;i<as.size();i++)
        {
            int a=as[i];
            while(!st.empty()&& st.top()>0&& a<0)
            {   if(abs(st.top())>abs(a))
             {
                a=0;
             }
             else if(abs(st.top())<abs(a))
             {
                st.pop();
               
             }
             else if(abs(st.top())==abs(a))
             {
                st.pop();
                a=0;
             }


            }
            if(a!=0)
            {
                st.push(a);
            }
        }
        while(!st.empty())
        {
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};