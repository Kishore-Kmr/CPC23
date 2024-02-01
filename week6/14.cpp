int getLevelDiff(Node *root)
{
        int result=0;
        queue<Node*> q;
        q.push(root);
        bool even=false;
        while(!q.empty()){
            int size=q.size();
            for(int i=0;i<size;i++){
                Node *curr=q.front();
                q.pop();
                if(even)
                    result-=(curr->data);
                else
                    result+=(curr->data);
                if(curr->left)
                    q.push(curr->left);
                if(curr->right)
                    q.push(curr->right);
            }
            even=(!even);
        }
        return result;
}
