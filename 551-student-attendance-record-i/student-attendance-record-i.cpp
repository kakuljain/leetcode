class Solution {
public:
    bool checkRecord(string s) { 
        int c1=0,c2=0;

        for(auto it:s)
        {
            if(it=='A')
            {
                c1++;
                c2=0;      
            }
            else if(it=='L')
            {
                c2++;
            }
            else
            {
                c2=0;      
            }

            if(c1>=2 || c2>=3)
            {
                return false;
            }
        }

        return true;
    }
};