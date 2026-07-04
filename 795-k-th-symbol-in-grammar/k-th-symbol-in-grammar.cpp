class Solution {
public:
    int g(int n, int k) {
        if (n == 1)
            return 0;
         int ans=g(n - 1, (k + 1) / 2);
        if (k % 2 == 1)
            return ans;
        else
            return 1 - ans;
    }
    int kthGrammar(int n, int k) { return g(n, k); }
};