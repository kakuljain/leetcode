class Solution {
public:
    int countCollisions(string d) {
        
        int cnt=0;
        stack<char>st;
        for(int i=0;i<d.size();i++)
        {
            char a=d[i];
            while(!st.empty())
            {
                if(st.top()=='R'&& a=='L')
                {
                    cnt+=2;
                    st.pop();
                    a='S';
                }
                else if(st.top()=='R'&& a=='S')
                {
                    cnt++;
                    st.pop();
                    a='S';
                }
                else if(st.top()=='S'&& a=='L')
                {
                    cnt++;
                    st.pop();
                    a='S';
                    break;
                }
                else 
                {
                    break;
                }
            }
            st.push(a);
        }

        return cnt;
    }
};