class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int i=0,r=0,wi=0;
        int ans=INT_MAX;
        while(r<blocks.size())
        {
            if(blocks[r]=='W')
            {
                wi++;
            }
            while(r-i+1>k)
            {
                if(blocks[i]=='W')
                {
                    wi--;
                    i++;
                }
                else 
                {
                    i++;
                }

            }
            if(r-i+1==k)
            {
                ans=min(ans,wi);
            }
            r++;
            
        }
        return ans;
    }
};