class DisjointSet {
    vector<int> parent, size;
    int extra=0;
public:
    DisjointSet(int n){
        size.resize(n, 1);
        parent.resize(n);
        for(int i=0;i<n;i++)
            parent[i]=i;
    }
    int Uparent(int node){
        if(parent[node]==node)
            return node;
        return parent[node]=Uparent(parent[node]);
    }
    void unionBySize(int u, int v){
        int ulpU=Uparent(u), ulpV=Uparent(v);
        if(ulpU==ulpV){
            extra++;
            return;
        }
        if(size[ulpU]<size[ulpV]){
            parent[ulpU]=ulpV;
            size[ulpV]+=size[ulpU];
        }
        else{
            parent[ulpV]=ulpU;
            size[ulpU]+=size[ulpV];
        }
    }
    int numUlParent(){
        int n=0;
        for(int i=0;i<parent.size();i++)
            n+=(parent[i]==i);
        if(n-1<=extra)
            return n-1;
        return -1;
    }
};
class Solution {
public:
    int makeConnected(int n, vector<vector<int>>& connections) {
        DisjointSet ds(n);   
        for(int i=0;i<connections.size();i++)
            ds.unionBySize(connections[i][0], connections[i][1]);
        return ds.numUlParent();
    }
};
