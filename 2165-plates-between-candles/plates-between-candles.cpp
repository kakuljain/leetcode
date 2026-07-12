class Solution {
public:
    vector<int> platesBetweenCandles(string s, vector<vector<int>>& queries) {
        vector<int> ans;
        vector<int> prev(s.size(), -1);
        vector<int> prefix(s.size(), 0);
        vector<int>nexts(s.size(),-1);

        int j = -1;

        prefix[0] = (s[0] == '*');

        for (int i = 0; i < s.size(); i++)
        {
            if (i > 0)
            {
                if (s[i] == '*')
                    prefix[i] = prefix[i - 1] + 1;
                else
                    prefix[i] = prefix[i - 1];
            }

            if (s[i] == '|')
                j = i;

            prev[i] = j;
        }int k=-1;
        for(int i=s.size()-1;i>=0;i--)
        {
            if(s[i]=='|')
            {
                k=i;
            }
            nexts[i]=k;
        }int l=0,r=0;
        for(int i=0;i<queries.size();i++)
        {
            l=queries[i][0];
            r=queries[i][1];
            int left=nexts[l];
            int right=prev[r];
            if(left==-1||right==-1||left>=right)
            {
                ans.push_back(0);
            }
            else
            {
                ans.push_back(prefix[right]-prefix[left]);
            }
        }
        return ans;
    }
};