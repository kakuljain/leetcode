class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        int n = s.size();
        int cnt = 0;
        string ans = "";

        int i = 0, r = 0;

        while (r < n) {

            if (s[r] == '1') {
                cnt++;
            }

            while (cnt > k) {
                if (s[i] == '1')
                    cnt--;

                i++;
            }

            if (cnt == k) {

                while (s[i] == '0')
                    i++;

                string temp = s.substr(i, r - i + 1);

                if (ans == "" || temp.size() < ans.size())
                    ans = temp;

                else if (temp.size() == ans.size() && temp < ans)
                    ans = temp;
            }

            r++;
        }

        return ans;
    }
};