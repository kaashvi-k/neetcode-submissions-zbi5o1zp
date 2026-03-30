class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<set<int>> rows(9) ; 
        vector<set<int>> cols(9) ; 
        vector<set<int>> squares(9) ;

        for(int r = 0 ; r < 9  ; r++) {
            for(int c = 0 ; c < 9 ; c++) {
                if(board[r][c] == '.') continue;
                if( rows[r].count(board[r][c]) || 
                    cols[c].count(board[r][c]) ||
                    squares[(r/3)*3 + c/3].count(board[r][c]) 
                ) return false ; 

                rows[r].insert(board[r][c]); 
                cols[c].insert(board[r][c]); 
                squares[(r/3)*3+c/3].insert(board[r][c]) ;

            }
        }

        return true;
    }
};
