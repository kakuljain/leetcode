class Solution {
public:
    vector<string> assignUmbrella(vector<int>& rain) {
        vector<string>ans;
        int c1=0,c2=0;
        for(int i=0;i<rain.size();i++)
        {
            if(i+1<rain.size()&&rain[i]==1&&rain[i+1]==1)
            {
                if(c1<=c2)
                {
                    ans.push_back("Alice");
                    c1++;

                }
                else
                {
                    ans.push_back("Bob");
                    c2++;
                }
            }
            else if(rain[i]==1)
            {
                ans.push_back("Bob");
                c2++;
            }
            else if(rain[i]==0)
            {
                ans.push_back("None");
            }
        }
        return ans;
    }
};