class Solution {
public:
    bool safe(int row, int col, vector<string>& curr,int n) {
        int r = row;
        int c = col;
        while(r>=0)
        {
            if(curr[r][c]=='Q')
            return false;
            r--;
        }
        r=row;
        c=col;
        while(r>=0&&c>=0)
        {
            if(curr[r][c]=='Q')
             return false;
             r--;c--;
        }
        r=row;
        c=col;
        while(r>=0&&c<n)
        {
            if(curr[r][c]=='Q')
            return false;
            r--;c++;
        }
        return true;
    }
    void solve(int row, int n, vector<vector<string>>& ans,
               vector<string>& curr) {
        if (row == n) {
            ans.push_back(curr);
            return;
        }
        for (int col = 0; col < n; col++) {
            if (safe(row, col, curr,n)) {
                curr[row][col] = 'Q';
                solve(row + 1, n, ans, curr);
                 curr[row][col] = '.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<string> curr(n,string(n,'.'));
        solve(0, n, ans, curr);
        return ans;
    }
};