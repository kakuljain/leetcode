class Solution {
public:
    bool valid(vector<vector<char>>& board, int r, int c, int num) {
        char ch = num + '0';

        for (int i = 0; i < 9; i++) {
            if (board[r][i] == ch)
                return false;
        }

        for (int i = 0; i < 9; i++) {
            if (board[i][c] == ch)
                return false;
        }

        int sr = (r / 3) * 3;
        int sc = (c / 3) * 3;

        for (int i = sr; i < sr + 3; i++) {
            for (int j = sc; j < sc + 3; j++) {
                if (board[i][j] == ch)
                    return false;
            }
        }

        return true;
    }

    bool solve(vector<vector<char>>& board) {
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                if (board[i][j] == '.') {
                    for (int num = 1; num <= 9; num++) {
                        if (valid(board, i, j, num)) {
                            board[i][j] = num + '0';

                            if (solve(board))
                                return true;

                            board[i][j] = '.';
                        }
                    }

                    return false;
                }
            }
        }

        return true;
    }

    void solveSudoku(vector<vector<char>>& board) { solve(board); }
};