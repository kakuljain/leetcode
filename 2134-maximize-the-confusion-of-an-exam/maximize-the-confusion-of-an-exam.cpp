class Solution {
public:
    int maxConsecutiveAnswers(string answerkey, int k) {
        int n = answerkey.size();
        int i = 0, r = 0;
        int cnt = 0, ans = 0;
        while (r < n) {
            if (answerkey[r] == 'F') {
                cnt++;
            }

            while (cnt > k) {
                if (answerkey[i] == 'F') {

                    cnt--;
                }
                i++;
            }
            ans = max(ans, r - i + 1);

            r++;
        }
        i = 0, r = 0, cnt = 0;
        while (r < n) {
            if (answerkey[r] == 'T') {
                cnt++;
            }
            while (cnt > k) {
                if (answerkey[i] == 'T') {
                    cnt--;
                }
                i++;
            }
            ans = max(ans, r - i + 1);
            r++;
        }
        return ans;
    }
};