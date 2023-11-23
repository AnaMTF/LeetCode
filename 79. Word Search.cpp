// Given an m x n grid of characters board and a string word, return true if word exists in the grid.

// The word can be constructed from letters of sequentially adjacent cells, where adjacent cells are horizontally or vertically neighboring. The same letter cell may not be used more than once.
class Solution {
public:
    bool dfs(vector<vector<char>>& board, int i, int j, string& word) {
    if (!word.size())
        return true;
    if (i<0 || i>=board.size() || j<0 || j>=board[0].size() || board[i][j] != word[0])  
        return false;
    char c = board[i][j];
    board[i][j] = '*';
    string s = word.substr(1);
    bool ret = dfs(board, i-1, j, s) || dfs(board, i+1, j, s) || dfs(board, i, j-1, s) || dfs(board, i, j+1, s);
    board[i][j] = c;
    return ret;
}

bool exist(vector<vector<char>>& board, string word) {
    for (unsigned int i = 0; i < board.size(); i++) 
        for (unsigned int j = 0; j < board[0].size(); j++) 
            if (dfs(board, i, j, word))
                return true;
    return false;
}
};
