Node* sortedMerge(Node* head1, Node* head2)  
{  
    Node *dummy=new Node(0), *curr=dummy, *h1=head1, *h2=head2;
    while(h1&&h2){
        if(h1->data<=h2->data){
            curr->next=h1;
            h1=h1->next;
        }
        else{
            curr->next=h2;
            h2=h2->next;
        }
        curr=curr->next;
    }
    if(h1==NULL)
        curr->next=h2;
    if(h2==NULL)
        curr->next=h1;
    return dummy->next;
}  
