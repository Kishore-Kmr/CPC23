
void dfs(int node, vector<int>& visited, vector<vector<int>>& rooms){
    visited[node]=true;
    for(int adj:rooms[node]){
        if(visited[adj])    continue;
        dfs(adj, visited, rooms);
    }
}

bool canVisitAllRooms(vector<vector<int>>& rooms) {
    int n=rooms.size();
    vector<int> visited(n, false);
    dfs(0, visited, rooms);
    for(bool x:visited){
        if(x==false)
            return false;
    }
    return true;
}
