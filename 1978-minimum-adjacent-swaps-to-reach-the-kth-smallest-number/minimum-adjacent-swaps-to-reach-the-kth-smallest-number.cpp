class Solution {
public:
    int getMinSwaps(string num, int k) {
        int n = num.size();
        string target = num;

        while (k--) {
            next_permutation(target.begin(), target.end());
        }

        int ans = 0;

        for (int i = 0; i < n; i++) {

            if (num[i] == target[i])
                continue;

            int j = i;
            while (num[j] != target[i])
                j++;

            while (j > i) {
                swap(num[j], num[j - 1]);
                ans++;
                j--;
            }
        }

        return ans;
    }
};