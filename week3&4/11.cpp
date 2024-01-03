Node* findIntersection(Node* head1, Node* head2)
{
        Node *dummy= new Node(0), *curr=dummy, *node1=head1, *node2=head2;
        while(node1&&node2){
            if(node1->data==node2->data){
                curr->next=new Node(node1->data);
                curr=curr->next;
                node1=node1->next;
                node2=node2->next;
            }
            else if(node1->data<node2->data)
                node1=node1->next;
            else
                node2=node2->next;
        }
        return dummy->next;
}
