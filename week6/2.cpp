int getSize(Node* node)
{
    if(node==NULL)
        return 0;
    int result=0;
    queue<Node *> q;
    q.push(node);
    while(!q.empty()){
        Node *curr=q.front();
        q.pop();
        result++;
        if(curr->left)
            q.push(curr->left);
        if(curr->right)
            q.push(curr->right);
    }
    return result;

}
