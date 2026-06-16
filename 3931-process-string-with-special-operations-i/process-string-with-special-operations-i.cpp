class Solution {
public:
    string processStr(string s) {
        string ans="";
        for(auto it:s)
        {
            if(it=='#')
            {
                ans+=ans;
            }
            else if( it=='*')
            {
                if(!ans.empty())
                {ans.pop_back();}
            }
            else if(it=='%')
            {
                reverse(ans.begin(),ans.end());
            }
            else
            {
            ans+=it;}
        }
        return ans;
    }
};