void dfs(int r, int c, vector<vector<char>>& board, vector<vector<bool>>& visited){
    int m=board.size(), n=board[0].size();
    visited[r][c]=true;
    vector<int> delRow={0, -1, 0, 1}, delCol={-1, 0, 1, 0};
    for(int i=0;i<4;i++){
        int nr=r+delRow[i], nc=c+delCol[i];
        if(nr<0||nr>=m||nc<0||nc>=n||visited[nr][nc]||board[nr][nc]=='X') continue;
        dfs(nr, nc, board, visited);
    }
}
void solve(vector<vector<char>>& board) {
    int m=board.size(), n=board[0].size();
    vector<vector<bool>> visited(m, vector<bool>(n, false));
    int i=0, k=m-1;
    for(int j=0;j<n;j++){
        if(visited[i][j]==false&&board[i][j]=='O')
            dfs(i, j, board, visited);

        if(visited[k][j]==false&&board[k][j]=='O') 
            dfs(k, j, board, visited);
    }
    i=0, k=n-1;
    for(int j=1;j<m-1;j++){
        if(visited[j][i]==false&&board[j][i]=='O') 
            dfs(j, i, board, visited);

        if(visited[j][k]==false&&board[j][k]=='O') 
            dfs(j, k, board, visited);
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(visited[i][j]==false&&board[i][j]=='O')
                board[i][j]='X';
        }
    }
}
