class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        std::vector<std::unordered_set<char>> rows(9);
        std::vector<std::unordered_set<char>> cols(9);
        std::vector<std::unordered_set<char>> subBoxes(9);

        for (int row = 0; row < 9; ++row)
        {
            for (int col = 0; col < 9; ++col)
            {
                if (board[row][col] == '.'){
                    continue;
                }
                char val = board[row][col];
                int subBoxIndex = ((row / 3) * 3 + (col / 3));
                if (rows.at(row).find(val) != rows.at(row).end() ||
                    cols.at(col).find(val) != cols.at(col).end() ||
                    subBoxes.at(subBoxIndex).find(val) != subBoxes.at(subBoxIndex).end()){
                        return false;
                    }
                rows.at(row).insert(val);
                cols.at(col).insert(val);
                subBoxes.at(subBoxIndex).insert(val);
            }
        }
        return true;
    }
    
};
