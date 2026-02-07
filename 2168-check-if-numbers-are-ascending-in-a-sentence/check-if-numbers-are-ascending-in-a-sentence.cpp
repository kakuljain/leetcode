class Solution {
public:
    bool areNumbersAscending(string s) {
        int last = -1;
        int n = s.size();

        for (int i = 0; i < n; ) {
            if (isdigit(s[i])) {
                int num = 0;
                while (i < n && isdigit(s[i])) {
                    num = num * 10 + (s[i] - '0');
                    i++;
                }
                if (num <= last) return false;
                last = num;
            } else {
                i++;
            }
        }
        return true;
    }
};
