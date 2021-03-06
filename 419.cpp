class Solution {
public:
    int countBattleships(vector<vector<char>>& board) {
        int ans = 0;
        int n = board.size();
        if (n==0) return 0;
        int m = board[0].size();
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (board[i][j] == 'X') {
                    bool flagJ = j == 0 || (j>0 && board[i][j-1] == '.');
                    bool flagI = i == 0 || (i>0 && board[i-1][j] == '.');
                    if (flagJ && flagI) {
                        ans++;
                    }
                }
            }
        }
        
        return ans;
    }
};
