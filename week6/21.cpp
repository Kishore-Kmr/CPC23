vector<int> Kdistance(struct Node *root, int k)
{
    vector<int> result;
    queue<Node*> q;
    q.push(root);
    int lvl=-1;
    while(!q.empty()){
        lvl++;
        int size=q.size();
        for(int i=0;i<size;i++){
            Node *curr=q.front();
            q.pop();
            if(lvl==k)
                result.push_back(curr->data);
            if(curr->left)
                q.push(curr->left);
            if(curr->right)
                q.push(curr->right);
        }
    }
    return result;
}
