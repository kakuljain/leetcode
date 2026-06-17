class Solution {
public:
    string smallestPalindrome(string s) {
        unordered_map<char, int> mpp;
        string a = "";
        string b = "";
        string mid = "";
        string ans = "";

        for (auto it : s) {
            mpp[it]++;
        }

        for (auto it : mpp) {
            int i = it.second / 2;
            while (i--) {
                a += it.first;
            }

            if (it.second % 2 == 1) {
                mid = it.first;
            }
        }

        sort(a.begin(), a.end());

        b = a;
        reverse(b.begin(), b.end());   

        ans += a;
        ans += mid;
        ans += b;

        return ans;
    }
};