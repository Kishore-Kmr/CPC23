
  bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
      vector<vector<int>> adj(numCourses, vector<int>(0));
      vector<int> inDegree(numCourses), topo;
      for(auto v:prerequisites){
          adj[v[1]].push_back(v[0]);
          inDegree[v[0]]++;
      }
      queue<int> q;
      for(int i=0;i<numCourses;i++){
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
          }
          topo.push_back(curr);
      }
      return topo.size()==numCourses;
  }
