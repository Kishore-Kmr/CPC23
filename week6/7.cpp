class Solution
{
    Node *prev=NULL;
    void inorder(Node *curr){
        if(curr==NULL)
            return;
        inorder(curr->left);
        if(prev)
            prev->next=curr;
        prev=curr;
        inorder(curr->right);
    }
public:
    void populateNext(Node *root)
    {
        inorder(root);
    }
};
