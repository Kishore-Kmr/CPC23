int dfs(Node *node){
    if(node==NULL)
        return 0;
    if(node->left==NULL&&node->right==NULL)
        return node->data;
    int leftSum=dfs(node->left), rightSum=dfs(node->right);
    if(leftSum==-1||rightSum==-1||(node->data!=(leftSum+rightSum)))
        return -1;
    return leftSum+rightSum+node->data;
}
bool isSumTree(Node* root)
{
    return dfs(root)!=-1;
}
