class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        
        string ans = "";
        int l = 0, r = 0;

        int n = word1.size();
        int m = word2.size();

        while (l < n && r < m) {
            ans.push_back(word1[l]);
            l++;

            ans.push_back(word2[r]);
            r++;
        }

        while (l < n) {
            ans.push_back(word1[l]);
            l++;
        }

        while (r < m) {
            ans.push_back(word2[r]);
            r++;
        }

        return ans;
    }
};