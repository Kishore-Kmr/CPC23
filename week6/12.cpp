vector<int> reverseLevelOrder(Node *root)
{
    vector<int> result;
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        vector<int> currLevel;
        int size=q.size();
        for(int i=0;i<size;i++){
            Node *curr=q.front();
            q.pop();
            currLevel.push_back(curr->data);
            if(curr->left)
                q.push(curr->left);
            if(curr->right)
                q.push(curr->right);
        }
        for(int x:result)
            currLevel.push_back(x);
        result=currLevel;
    }
    return result;
}
