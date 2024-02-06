void dfs(int r, int c, vector<vector<int>>& image, int& color, vector<vector<bool>>& visited){
  int m=image.size(), n=image[0].size();
  visited[r][c]=true;
  vector<int> delRow={0, -1, 0, 1}, delCol={-1, 0, 1, 0};
  for(int i=0;i<4;i++){
      int nr=r+delRow[i], nc=c+delCol[i];
      if(nr<0||nr>=m||nc<0||nc>=n||visited[nr][nc]||image[nr][nc]!=image[r][c]) continue;
      dfs(nr, nc, image, color, visited);
  }
  image[r][c]=color;
}
vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
    int m=image.size(), n=image[0].size();
    vector<vector<bool>> visited(m, vector<bool>(n, false));
    dfs(sr, sc, image, color, visited);
    return image;
}
