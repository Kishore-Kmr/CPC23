void linkdelete(struct Node  *head, int M, int N){
        Node *dummy=new Node(-1), *curr=dummy;
        dummy->next=head;
        while(curr){
            for(int i=0;curr&&i<M;i++)
                curr=curr->next;
            if(curr==NULL)
                break;
            Node *temp=curr;
            for(int i=0;temp->next&&i<N;i++)
                temp=temp->next;
            curr->next=temp->next;
        }
}
