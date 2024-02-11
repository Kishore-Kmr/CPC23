class DisjointSet {
    vector<int> size, parent;
public:
    DisjointSet(int n){
        size.resize(n, 1);
        parent.resize(n);
        for(int i=0;i<n;i++)
            parent[i]=i;
    }
    int findUParent(int node){
        if(parent[node]==node)  
            return node;
        return parent[node]=findUParent(parent[node]);
    }
    void unionBySize(int u, int v){
        int ulpU=findUParent(u), ulpV=findUParent(v);
        if(ulpU==ulpV)  return;
        if(size[ulpU]<size[ulpV]){
            size[ulpV]+=size[ulpU];
            parent[ulpU]=ulpV;
        }
        else{
            size[ulpU]+=size[ulpV];
            parent[ulpV]=ulpU;
        }
    }
    int numOfUlp(){
        int count=0;
        for(int i=0;i<parent.size();i++)
            count+=(parent[i]==i);
        return count;
    }
};
class Solution {
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n=isConnected.size();
        DisjointSet ds(n);
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(isConnected[i][j])
                    ds.unionBySize(i, j);
            }
        }
        return ds.numOfUlp();
    }
};
