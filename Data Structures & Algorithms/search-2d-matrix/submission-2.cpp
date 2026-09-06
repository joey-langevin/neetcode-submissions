class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int n = matrix.size();
        int m = matrix[0].size();
        int left = 0;
        int right = (n * m) - 1;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            int curr = matrix[mid / m][mid % m];
            cout << "val: " << curr << endl;
            if (curr == target) return true;
            else if (curr < target) left = mid + 1;
            else right = mid - 1;
        }
        return false;
    }
};

// index : 11 -> row 2, index 3
// 3 rows, 4 columns

// 11 / 4 -> 2 , 11 % 4
// 