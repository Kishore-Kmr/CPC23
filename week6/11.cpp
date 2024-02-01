vector<int> findSpiral(Node *root)
{
    vector<int> result;
    queue<Node*> q;
    q.push(root);
    bool rev=true;
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
        int n=currLevel.size();
        for(int i=0, j=n-1; i<n; i++, j--){
            if(rev)
                result.push_back(currLevel[j]);
            else
                result.push_back(currLevel[i]);
        }
        rev=!rev;
    }
    return result;
}
