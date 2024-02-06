void dfs(int r, int c, vector<vector<int>>& grid, int& perimeter, vector<vector<bool>>& visited){
    int m=grid.size(), n=grid[0].size();
    visited[r][c]=true;
    vector<int> delRow={0, -1, 0, 1}, delCol={-1, 0, 1, 0};
    for(int i=0;i<4;i++){
        int nr=r+delRow[i], nc=c+delCol[i];
        if(nr<0||nr>=m||nc<0||nc>=n||grid[nr][nc]==0)
            perimeter++;
        else if(visited[nr][nc]==false)
            dfs(nr, nc, grid, perimeter, visited);
    }
}
int islandPerimeter(vector<vector<int>>& grid) {
    int m=grid.size(), n=grid[0].size(), perimeter=0;
    vector<vector<bool>> visited(m, vector<bool>(n, false));
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(grid[i][j]==1){
                dfs(i, j, grid, perimeter, visited);
                i=m;
                break;
            }
        }
    }
    return perimeter;
}
