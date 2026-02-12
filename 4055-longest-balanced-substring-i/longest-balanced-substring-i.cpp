class Solution {
public:
    int longestBalanced(string s) {
        int n = s.size();
        int ans = 0;

        for(int i = 0; i < n; i++) {

            unordered_map<char,int> mpp;  

            for(int j = i; j < n; j++) {

                mpp[s[j]]++;   

                int maxi = INT_MIN;
                int mini = INT_MAX;

                for(auto it : mpp) {
                    maxi = max(maxi, it.second);
                    mini = min(mini, it.second);
                }

                if(maxi == mini) {
                    ans = max(ans, j - i + 1);
                }
            }
        }

        return ans;
    }
};
