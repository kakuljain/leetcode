class Solution {
public:
    int g(int n, int k) {
        if (n == 1)
            return 1;
        int ans = g(n - 1, k);
        return (ans + k - 1) % n + 1;
    }
    int findTheWinner(int n, int k) { return g(n, k); }
};