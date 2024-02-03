bool isLeaf(Node *node){
    return (node->left==NULL)&&(node->right==NULL);
}
int numOfLeaves(Node *node){
    if(node==NULL)
        return 0;
    if(isLeaf(node))
        return 1;
    return numOfLeaves(node->left)+numOfLeaves(node->right);
        
}
int countLeaves(Node* root)
{
  return numOfLeaves(root);
}
