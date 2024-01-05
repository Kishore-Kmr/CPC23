Node* segregate(Node *head) {
        Node *dummy2=new Node(0), *curr2=dummy2, *dummy0=new Node(0), *curr0=dummy0;
        Node *dummy1=new Node(0), *curr1=dummy1;
        dummy1->next=head;
        while(curr1->next){
            if((curr1->next->data)==0){
                curr0->next=curr1->next;
                curr1->next=curr1->next->next;
                curr0=curr0->next;
                curr0->next=NULL;
            }
            else if((curr1->next->data)==2){
                curr2->next=curr1->next;
                curr1->next=curr1->next->next;
                curr2=curr2->next;
                curr2->next=NULL;
            }
            else
                curr1=curr1->next;
        }
        if(dummy1->next==NULL)
            curr0->next=dummy2->next;
        else
            curr0->next=dummy1->next, curr1->next=dummy2->next;
        return dummy0->next;
}
