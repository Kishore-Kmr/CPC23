bool isLeaf(Node *node){
    return (node->left==NULL)&&(node->right==NULL);
}
bool dfs(Node *currNode, int currLevel, int& leafLevel){
    if(currNode==NULL)
        return true;
    if(isLeaf(currNode)){
        if(leafLevel==-1)
            leafLevel=currLevel;
        else if(currLevel!=leafLevel)
            return false;
    }
    bool result=dfs(currNode->left, currLevel+1, leafLevel)&&dfs(currNode->right, currLevel+1, leafLevel);
    return result!=false;
}
bool check(Node *root)
{
    int leafLevel=-1;
    return dfs(root, 0, leafLevel);
}
