class Solution {
public:
    bool isSafe(int row,int col,vector<string> &board,int n)
    {
        //Checking the upper diagonal
        int rowdup = row;
        int coldup = col;
        while(col>=0 && row>=0)
        {
            if(board[row][col] == 'Q')
                return false;
            col--;
            row--;
        }
        //Checking the lower diagonal
        row = rowdup;
        col = coldup;
        while(row<n && col>=0)
        {
            if(board[row][col] == 'Q')
                return false;
            row++;
            col--;
        }
        //Checking the same row but backwards
        col = coldup;
        row = rowdup;
        while(col>=0)
        {
            if(board[row][col] == 'Q')
                return false;
            col--;
        }
        return true;
    }
    void solve(int col,vector<vector<string>> &ans,vector<string> &board,int n)
    {
        if(col == n)
        {
            ans.push_back(board);
            return;
        }
        
        for(int row = 0;row<n;row++)
        {
            if(isSafe(row,col,board,n))
            {
                board[row][col] = 'Q';
                solve(col+1,ans,board,n);
                //backtracking
                board[row][col] = '.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) 
    {
        vector<string> board(n);
        vector<vector<string>> ans;
        string s(n,'.');
        for(int i=0;i<n;i++)
        {
            board[i] = s;
        }
        solve(0,ans,board,n);
        return ans;
    }
};