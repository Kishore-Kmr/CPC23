void dfs(int r, int c, vector<vector<char>>& grid, vector<vector<bool>>& visited){
    int m=grid.size(), n=grid[0].size();
    visited[r][c]=true;
    vector<int> delRow={0, -1, 0, 1}, delCol={-1, 0, 1, 0};
    for(int i=0;i<4;i++){
        int nr=r+delRow[i], nc=c+delCol[i];
        if(nr<0||nr>=m||nc<0||nc>=n||visited[nr][nc]||grid[nr][nc]!='1') continue;
        dfs(nr, nc, grid, visited);
    }
}
int numIslands(vector<vector<char>>& grid) {
    int m=grid.size(), n=grid[0].size(), result=0;
    vector<vector<bool>> visited(m, vector<bool>(n, false));
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(visited[i][j]==false&&grid[i][j]=='1'){
                result++;
                dfs(i, j, grid, visited);
            }
        }
    }
    return result;
}
