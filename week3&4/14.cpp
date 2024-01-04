Node* rotate(Node* head, int k)
{
        Node *tail=head, *curr=head;
        while(tail&&tail->next)
            tail=tail->next;
        tail->next=head;
        for(int i=0;i<k-1;i++)
            curr=curr->next;
        Node *temp=curr->next;
        curr->next=NULL;
        return temp;
}
