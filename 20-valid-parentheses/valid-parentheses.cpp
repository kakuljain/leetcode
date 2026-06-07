class Solution {
public:
    bool isValid(string s) {
        stack<int>st;
        for(auto it:s)
        {if(it=='(' || it=='{' || it=='[')
            {st.push(it);}
            else
            { if(st.empty())
            {return false;}
                    char c=st.top();
                if((it==')'&&c!='(')||(it=='}'&&c!='{')||(it==']'&&c!='['))
                {
                    return false;
                }
                st.pop();
            }
        }
         return st.empty();;
    }
};