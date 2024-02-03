vector<int> leftView(Node *root)
{
    if(root==NULL)
        return {};
    vector<int> result;
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        int size=q.size();
        for(int i=0;i<size;i++){
            Node *curr=q.front();
            q.pop();
            if(i==0)
                result.push_back(curr->data);
            if(curr->left)
                q.push(curr->left);
            if(curr->right)
                q.push(curr->right);
        }
    }
    return result;
}
