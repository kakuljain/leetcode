class Solution {
public:
    bool canAliceWin(int n) {
        int moves = 0;
        for (int take = 10; n >= take; --take) {
            n -= take;
            ++moves;
        }
        return moves % 2 == 1;
    }
};