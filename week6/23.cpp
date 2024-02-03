int dfs(Node *curr, int& k, int& visited){
    if(curr==NULL)
        return -1;
    int rightResult=dfs(curr->right, k, visited);
    if(rightResult!=-1)
        return rightResult;
    if(visited==k-1)
        return curr->data;
    visited++;
    return dfs(curr->left, k, visited);
}
public:
int kthLargest(Node *root, int K)
{
    int visited=0;
    return dfs(root, K, visited);
}
