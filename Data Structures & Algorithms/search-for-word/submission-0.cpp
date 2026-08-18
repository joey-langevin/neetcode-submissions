class Solution {
public:
    bool exist(vector<vector<char>>& board, string word) {
        int rows = board.size();
        int cols = board[0].size();
        unordered_set<int> visited;
        bool exists = false;
        for (int i = 0; i < rows; ++i){
            for (int j = 0; j < cols; ++j) {
                exists |= dfs(board, word, visited, make_pair(i, j), "");
            }
        }
        return exists;


    }
    bool dfs(vector<vector<char>>& board, string word, unordered_set<int>& visited, pair<int, int> pos, string curr) {
        if (curr == word) return true;
        if (curr.size() == word.size() || pos.first < 0 || pos.first >= board.size() || pos.second < 0 || pos.second > board[0].size() || 
        visited.find(pos.first * board[0].size() + pos.second) != visited.end()) return false;

        visited.insert(pos.first * board[0].size() + pos.second);
        curr += board[pos.first][pos.second];
        cout << curr << endl;

        bool result = dfs(board, word, visited, make_pair(pos.first, pos.second +1), curr) ||
        dfs(board, word, visited, make_pair(pos.first, pos.second -1), curr) ||
        dfs(board, word, visited, make_pair(pos.first + 1, pos.second), curr) ||
        dfs(board, word, visited, make_pair(pos.first - 1, pos.second), curr);
        visited.erase(pos.first * board[0].size() + pos.second);
        return result;
    }
private:
};
