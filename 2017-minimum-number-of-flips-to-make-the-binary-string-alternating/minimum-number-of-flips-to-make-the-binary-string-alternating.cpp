class Solution {
public:
    int minFlips(string s) {
        int n = s.length();
        s = s + s;

        string s1="", s2="";

        for(int i=0;i<2*n;i++)
        {
            s1 += (i%2 ? '0':'1');
            s2 += (i%2 ? '1':'0');
        }

        int result = INT_MAX;
        int flip1=0, flip2=0;
        int k=0;

        for(int j=0;j<2*n;j++)
        {
            if(s[j]!=s1[j]) flip1++;
            if(s[j]!=s2[j]) flip2++;

            if(j-k+1>n)
            {
                if(s[k]!=s1[k]) flip1--;
                if(s[k]!=s2[k]) flip2--;
                k++;
            }

            if(j-k+1==n)
                result = min(result, min(flip1,flip2));
        }

        return result;
    }
};