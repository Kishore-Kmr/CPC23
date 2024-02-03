void dfs(Node *curr, int& sumOfRight){
    if(curr==NULL)
        return ;
    dfs(curr->right, sumOfRight);
    curr->data+=sumOfRight;
    sumOfRight=curr->data;
    dfs(curr->left, sumOfRight);
}
Node* modify(Node *root)
{
    int sum=0;
    dfs(root, sum);
    return root;
}
