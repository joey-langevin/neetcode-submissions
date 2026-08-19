class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        
        vector<std::unordered_set<char>> cols(board.size()); 
        vector<std::unordered_set<char>> rows(board.size());
        vector<std::unordered_set<char>> boxes(board.size());

        for (int rowIndex = 0; rowIndex < board.size(); ++rowIndex) {
            for (int colIndex = 0; colIndex < board.at(rowIndex).size(); ++colIndex) {
                char c = board[rowIndex][colIndex];

                if (c == '.') continue;

                
                int boxIndex = 3 * (rowIndex / 3) + (colIndex / 3);
                cout << "RowIndex: " << rowIndex << " ColIndex: " << colIndex << " BoxIndex: " << boxIndex
                << " Char: " << c << endl;


                if (cols.at(colIndex).contains(c) || rows.at(rowIndex).contains(c) 
                ||  boxes.at(boxIndex).contains(c)) {

                    return false;
                }
                cols.at(colIndex).insert(c);
                rows.at(rowIndex).insert(c);
                boxes.at(boxIndex).insert(c);
            }
        }
        return true;


    }
};

