
bool dfs(int node, vector<int>& visited, vector<vector<int>>& graph, vector<int>& result){
    visited[node]=2;
    for(int neigh:graph[node]){
        if(visited[neigh]==2){
            return true;
        }
        if(visited[neigh]!=1){
            if(dfs(neigh, visited, graph, result)){
                return true;
            }
        }
    }
    visited[node]=1;
    result.push_back(node);
    return false;
}
vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
    int n=graph.size();
    vector<int> visited(n), result;
    for(int i=0;i<n;i++){
        if(visited[i]==0)                
            dfs(i, visited, graph, result);
    }
    sort(result.begin(), result.end());
    return result;
}
