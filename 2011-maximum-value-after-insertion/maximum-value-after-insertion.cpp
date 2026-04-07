class Solution {
public:
    string maxValue(string n, int x) {
        char ch = x + '0';
        string ans;
        bool inserted = false;

        if(n[0] == '-') 
        {
            ans.push_back('-');
            for(int i = 1; i < n.size(); i++)
            {
                if(!inserted && n[i] > ch)
                {
                    ans.push_back(ch);
                    inserted = true;
                }
                ans.push_back(n[i]);
            }
        }
        else  
        {
            for(int i = 0; i < n.size(); i++)
            {
                if(!inserted && n[i] < ch)
                {
                    ans.push_back(ch);
                    inserted = true;
                }
                ans.push_back(n[i]);
            }
        }

        if(!inserted)
            ans.push_back(ch);

        return ans;
    }
};