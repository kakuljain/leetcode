class Solution {
public:
    int longestPalindrome(string s) {
        int n = s.size();
        int cnt = 0;
        unordered_map<char,int> mpp;
        bool flag = false;

        for(int i = 0; i < n; i++)
        {
            mpp[s[i]]++;
        }

        for(auto it : mpp)
        {
            if(it.second % 2 == 0)
            {
                cnt += it.second;
            }
            else
            {
                cnt += it.second - 1;
                flag = true;
            }
        }

        if(flag) cnt++;

        return cnt;
    }
};