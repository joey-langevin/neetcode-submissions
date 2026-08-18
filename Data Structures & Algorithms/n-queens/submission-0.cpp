class Solution {
public:
    unordered_set<int> cols;
    unordered_set<int> posDiag;
    unordered_set<int> negDiag;
    vector<vector<string>> result;

    vector<vector<string>> solveNQueens(int n) {
        vector<string> board(n, string(n, '.'));
        backtrack(n, 0, board);
        return result;
    }

    void backtrack(int n, int start, vector<string>& board)
    {
        if (start == n)
        {
            result.push_back(board);
            return;
        }

        for (int c = 0; c < n; ++c) {

            if (cols.count(c) || posDiag.count(start + c) || negDiag.count(start - c)) {
                continue;
            }
            cols.insert(c);
            posDiag.insert(start + c);
            negDiag.insert(start - c);
            board[start][c] = 'Q';

            backtrack(n, start + 1, board);

            cols.erase(c);
            posDiag.erase(start + c);
            negDiag.erase(start - c);
            board[start][c] = '.';

        }
    }
};
