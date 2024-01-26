int dfs(TreeNode *curr, int& result){
        if(curr==NULL)
            return 0;
        int left=dfs(curr->left, result), right=dfs(curr->right, result);
        result=max(result, left+right);
        return 1+max(left, right);
    }

int diameterOfBinaryTree(TreeNode* root) {
        int result=INT_MIN;
        dfs(root, result);
        return result;
}
