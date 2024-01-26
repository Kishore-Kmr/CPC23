int widthOfBinaryTree(TreeNode* root) {
        queue<pair<TreeNode*, int>> q;
        q.push({root, 0});
        long long result=0, leftMost, rightMost;
        while(!q.empty()){
            int size=q.size();
            for(int i=0;i<size;i++){
                TreeNode *currNode=q.front().first;
                long long pos=q.front().second;
                q.pop();
                if(i==0)    leftMost=pos;
                if(i==size-1)   rightMost=pos;
                if(currNode->left)
                    q.push({currNode->left, pos*2+1});
                if(currNode->right)
                    q.push({currNode->right, pos*2+2});
            }
            result=max(result, rightMost-leftMost+1);
        }
        return result;
}
