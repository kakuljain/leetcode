class Solution {
public:
    int minimumPushes(string word) {
        int ans=0,cnt=1;
        int n=word.size();
        while(n>8)
        {
            ans+=8*cnt;
            n-=8;
            cnt++;
        } ans+=n*cnt;
        return ans;
    }
};