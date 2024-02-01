vector<int> verticalSum(Node *root) {
        vector<int> result;
        map<int, int> mp;
        queue<pair<Node*, int>> q;
        q.push({root, 0});
        while(!q.empty()){
            Node *currNode=q.front().first;
            int x=q.front().second;
            q.pop();
            mp[x]+=currNode->data;
            if(currNode->left)
                q.push({currNode->left, x-1});
            if(currNode->right)
                q.push({currNode->right, x+1});
        }
        for(auto it:mp)
            result.push_back(it.second);
        return result;
}
