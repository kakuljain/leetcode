class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char>st;
        stack<char>st1;
        for(auto it:s)
        {
            if(!st.empty()&& it=='#')
            {
                
                st.pop();
                
            }
            if(it=='#')
            continue;
            st.push(it);
        }
        for(auto it:t)
        {
            if(!st1.empty()&& it=='#')
            {
                
                st1.pop();
                
               
            }
             if(it=='#')
            continue;
            st1.push(it);
        }
        if(st.size() != st1.size())
    return false;
   
        while(!st.empty())
        {
            if(st.top()!=st1.top())
            {
                return false;
            }
            else
            {
                st.pop();
                st1.pop();
            }
        }
    
    return true;
        
    }
};