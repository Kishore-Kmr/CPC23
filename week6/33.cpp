int height(Node* node){
    if(node==NULL)
        return -1;
    int leftHeight=height(node->left);
    if(leftHeight==-2)
        return -2;
    int rightHeight=height(node->right);
    if(rightHeight==-2)
        return -2;
    if(abs(leftHeight-rightHeight)>1)
        return -2;
    return 1+max(leftHeight, rightHeight);
    
}
bool isBalanced(Node *root)
{
    return height(root)!=-2;
}
