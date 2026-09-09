class Solution {
public:
    long long countCommas(long long n) {
        string s=to_string(n);
        long long cnt=0;
        if(s.size()<4)return 0;
        if(n==1000) return 1;
        for(long long i=1000;i<=n;i*=1000)
        {
            cnt+=(n-i+1);
        }
        return cnt;
    }
};