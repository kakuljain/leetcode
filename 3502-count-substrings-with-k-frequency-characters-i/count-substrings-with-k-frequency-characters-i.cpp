class Solution {
public:
    int numberOfSubstrings(string s, int k) {
        unordered_map<char,int>mpp;
        int cnt=0;
        int l=0,r=0;
        int n=s.size();
        while(r<n)
        {
            mpp[s[r]]++;
            while(mpp[s[r]]>=k)
            {
                cnt+=n-r;
                mpp[s[l]]--;
                l++;
            }
            r++;
        }
        return cnt;

    }
};