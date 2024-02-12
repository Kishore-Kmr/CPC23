class Solution{
    void topoSort(int node, vector<vector<int>>& adj, vector<bool>& visited, string& result){
        visited[node]=true;
        for(int neigh:adj[node]){
            if(visited[neigh]==false){
                topoSort(neigh, adj, visited, result);
            }
        }
        result+=('a'+node);
    }
    public:
    string findOrder(string dict[], int N, int K) {
        vector<vector<int>> adj(K, vector<int>(0));
        for(int i=0;i<N-1;i++){
            string str1=dict[i], str2=dict[i+1];
            int n=min(str1.size(), str2.size());
            for(int j=0;j<n;j++){
                if(str1[j]!=str2[j]){
                    adj[str1[j]-'a'].push_back(str2[j]-'a');
                    break;
                }
            }
        }
        string result;
        vector<bool> visited(K, false);
        for(int i=0;i<K;i++){
            if(visited[i]==false){
                topoSort(i, adj, visited, result);
            }
        }
        reverse(result.begin(), result.end());
        return result;
    }
};
