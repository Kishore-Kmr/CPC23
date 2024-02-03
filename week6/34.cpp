bool isLeaf(Node *node){
    return node->left==NULL&&node->right==NULL;
}
bool isCompleteBT(Node* root){
    queue<Node*> q;
    q.push(root);
    bool flag=false;
    while(!q.empty()){
        Node *curr=q.front();
        q.pop();
        if(flag&&!isLeaf(curr))
            return false;
        if(curr->left==NULL){
            if(curr->right)
                return false;
            flag=true;
        }
        else if(curr->right==NULL){
            flag=true; 
        }
        if(curr->left)
            q.push(curr->left);
        if(curr->right)
            q.push(curr->right);
    }
    return true;
}
