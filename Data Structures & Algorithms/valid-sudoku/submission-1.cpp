class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {

        int size = board.size();

        vector<unordered_set<char>> cols(9);
        vector<unordered_set<char>> rows(9);
        vector<vector<unordered_set<char>>> boxes(3);
        for (auto& boxRow : boxes) {
            boxRow.resize(3);
        }
        

        for (int rowIndex = 0; rowIndex < size; ++rowIndex) {
            for (int colIndex = 0; colIndex < size; ++colIndex) {
                char currentChar = board[rowIndex][colIndex];
                if (currentChar != '.') {
                    
                    int boxFirstIndex = colIndex / 3;
                    int boxSecondIndex = rowIndex /3;

                    // check cols
                    if (cols.at(colIndex).find(currentChar) != cols.at(colIndex).end()) {
                        return false;  
                    } 
                    if (rows.at(rowIndex).find(currentChar) != rows.at(rowIndex).end()){
                        return false;  
                    } 
                    auto& boxSet = boxes.at(colIndex / 3).at(rowIndex / 3);
                    if (boxSet.find(currentChar) != boxSet.end()) {
                        cout << boxFirstIndex << "," << boxSecondIndex << "," << currentChar;
                        cout << currentChar << " boxes" << endl;
                        return false;
                    }

                    cols.at(colIndex).insert(currentChar);
                    rows.at(rowIndex).insert(currentChar);
                    boxSet.insert(currentChar);
                    cout << boxFirstIndex << "," << boxSecondIndex << "," << currentChar << endl;
                }
            }
        }
        return true;
        
    }
};
