struct Node* makeUnion(struct Node* head1, struct Node* head2){
        struct Node *curr=head1, *dummy=new Node(0);
        unordered_set<int> st;
        while(curr){
            st.insert(curr->data);
            curr=curr->next;
        }
        curr=head2;
        while(curr){
            st.insert(curr->data);
            curr=curr->next;
        }
        curr=dummy;
        for(int x:st){
            curr->next=new Node(x);
            curr=curr->next;
        }
        return dummy->next;
}
    
struct Node* makeIntersect(struct Node* head1, struct Node* head2){
        struct Node *curr=head1, *dummy=new Node(0);
        unordered_set<int> st;
        while(curr){
            st.insert(curr->data);
            curr=curr->next;
        }
        curr=head2;
        struct Node *temp=dummy;
        while(curr){
            if(st.count(curr->data)!=0){
                temp->next=new Node(x);
                temp=temp->next;
            }
            curr=curr->next;
        }
        return dummy->next;
}
