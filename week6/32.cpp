vector<int> dfs(Node *node){
    if(node==NULL)
        return {INT_MIN, INT_MAX};
    vector<int> lMaxMin=dfs(node->left);
    vector<int> rMaxMin=dfs(node->right);
    if(lMaxMin[0]==-1||rMaxMin[0]==-1)
        return {-1};
    if(node->data<=lMaxMin[0]||node->data>=rMaxMin[1])
        return {-1};
    return {max(node->data, rMaxMin[0]), min(node->data, lMaxMin[1])};
}
public:
//Function to check whether a Binary Tree is BST or not.
bool isBST(Node* root) 
{
    vector<int> temp=dfs(root);
    return temp[0]!=-1;
}
