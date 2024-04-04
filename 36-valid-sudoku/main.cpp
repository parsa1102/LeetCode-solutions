class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        set<int> s[2];
        set<int> ss[3][3];
        for(int i = 0 ;i < 9;i++){
            s[0].clear();
            s[1].clear();
            for(int j = 0 ;j < 9;j++){
                if(s[0].find(board[i][j]) != s[0].end() && board[i][j] != '.'){
                    return false;
                }
                if(s[1].find(board[j][i]) != s[1].end() && board[j][i] != '.'){
                    return false;
                }
                s[0].insert(board[i][j]);
                s[1].insert(board[j][i]);
                if(ss[i/3][j/3].find(board[i][j]) != ss[i/3][j/3].end() && board[i][j] != '.'){
                    return false;
                }
                ss[i/3][j/3].insert(board[i][j]);
            }
        }
        return true;
    }
};
