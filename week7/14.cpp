void dfs(int r, int c, vector<vector<int>>& grid, vector<vector<bool>>& visited, bool& flag){
    int m=grid.size(), n=grid[0].size();
    visited[r][c]=true;
    vector<int> delRow={0, -1, 0, 1}, delCol={-1, 0, 1, 0};
    for(int i=0;i<4;i++){
        int nr=r+delRow[i], nc=c+delCol[i];
        if(nr<0||nr>=m||nc<0||nc>=n){
            flag=false;
            continue;
        }
        if(visited[nr][nc]||grid[nr][nc]!=0)    continue;
        dfs(nr, nc, grid, visited, flag);
    }
}
int closedIsland(vector<vector<int>>& grid) {
    int m=grid.size(), n=grid[0].size(), result=0;
    vector<vector<bool>> visited(m, vector<bool>(n, false));
    bool flag;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(visited[i][j]==false&&grid[i][j]==0){
                flag=true;
                dfs(i, j, grid, visited, flag);
                result+=flag;
            }
        }
    }
    return result;
}
