Node* merge(Node *head1, Node *head2){
    Node *dummy=new Node(-1), *curr=dummy;
    while(head1&&head2){
        if(head1->data<=head2->data){
            curr->bottom=head1;
            head1=head1->bottom;
        }
        else{
            curr->bottom=head2;
            head2=head2->bottom;
        }
        curr=curr->bottom;
    }
    if(head1==NULL)
        curr->bottom=head2;
    if(head2==NULL)
        curr->bottom=head1;
    return dummy->bottom;
}
Node *flatten(Node *root)
{
   while(root->next){
       bool isFirst=true;
       Node *curr=root;
       while(curr&&curr->next){
           Node *head=merge(curr, curr->next);
           head->next=curr->next->next;
           curr=head->next;
           if(isFirst){
               isFirst=false;
               root=head;
           }
       }
   }
   return root;
}
