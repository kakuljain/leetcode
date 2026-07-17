class Solution {
public:
    int compress(vector<char>& chars) {
        int i = 0, j = 0;
        int cnt = 0;
        while (j < chars.size()) {
            char c = chars[j];
            while (j < chars.size() && chars[j] == c) {

                cnt++;
                j++;
            }
            chars[i] = c;
            i++;
            if (cnt >= 2 && cnt < 10) {
                chars[i] = cnt + '0';
                i++;
            } else if (cnt >= 10) {
                string x = to_string(cnt);
                for (auto it : x) {
                    chars[i] =it;
                    i++;
                }
            }
            cnt = 0;
        }
        return i;
    }
};