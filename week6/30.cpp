 bool dfs(TreeNode *node1, TreeNode *node2){
        if(node1==NULL||node2==NULL)
            return node1==node2;
        else if(node1->val!=node2->val)
            return false;
        bool result=(dfs(node1->left, node2->left)&&dfs(node1->right, node2->right)) || 
                    (dfs(node1->left, node2->right)&&dfs(node1->right, node2->left));
        return result;
    }
    bool flipEquiv(TreeNode* root1, TreeNode* root2) {
        return dfs(root1, root2);
    }
