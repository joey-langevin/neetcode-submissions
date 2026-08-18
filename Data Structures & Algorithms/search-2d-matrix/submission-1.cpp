class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int top = 0;
        int bottom = matrix.size() - 1;
        int mid;
        while (top <= bottom)
        {
            mid = (top + bottom) / 2;
            if (matrix[mid][0] < target)
            {
                cout << "mid: " << mid << endl;
                cout << "size: " << matrix.size() -1 << endl;
                if (mid == (matrix.size() -1) || matrix[mid+1][0] > target){
                    int left = 0;
                    int right = matrix[mid].size() - 1;
                    while (left <= right)
                    {
                        int m = (left + right) / 2;
                        if (matrix[mid][m] < target){
                            left = m + 1;
                        }
                        else if (matrix[mid][m] > target)
                        {
                            right = m - 1;
                        }
                        else{
                            return true;
                        }
                    }
                    return false;
                }
            }  
            if (matrix[mid][0] < target)
            {
                cout << "here" << endl;
                top = mid + 1;
            }
            else if (matrix[mid][0] > target)
            {
                bottom = mid - 1;
            }
            else {
                return true;
            }
        }
        return false;
        
    }
};
