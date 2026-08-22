class NumMatrix {
public:
    vector<vector<int>> prefix;
    NumMatrix(vector<vector<int>>& matrix) {

        prefix.resize(matrix.size() + 1);
        for (auto& col : prefix) {
            col.resize(matrix[0].size() + 1);
        }

        for (int rowIndex = 0; rowIndex < matrix.size(); ++rowIndex) {
            for (int colIndex = 0; colIndex < matrix[0].size(); ++colIndex) {

                prefix[rowIndex + 1][colIndex +1] = prefix[rowIndex][colIndex+1] + prefix[rowIndex+1][colIndex] + matrix[rowIndex][colIndex] - prefix[rowIndex][colIndex];
            }
        }
        
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        
        return prefix[row2 + 1][col2 + 1] - prefix[row1][col2 + 1] - prefix[row2+1][col1] + prefix[row1][col1];
    }


};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */