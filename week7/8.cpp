vector<int> loudAndRich(vector<vector<int>>& richer, vector<int>& quiet) {
        int n=quiet.size();
        vector<vector<int>> adj(n, vector<int>(0));
        vector<int> inDegree(n), result(n);
        for(auto v:richer){
            adj[v[0]].push_back(v[1]);
            inDegree[v[1]]++;
        }
        for(int i=0;i<n;i++)
            result[i]=i;
        queue<int> q;
        for(int i=0;i<n;i++){
            if(inDegree[i]==0)
                q.push(i);
        }
        while(!q.empty()){
            int curr=q.front();
            q.pop();
            for(int neigh:adj[curr]){
                inDegree[neigh]--;
                if(inDegree[neigh]==0)
                    q.push(neigh);
                if(quiet[result[curr]]<quiet[result[neigh]])
                    result[neigh]=result[curr];
            }
        }
        return result;
}
