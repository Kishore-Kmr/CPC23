Node* divide(int N, Node *head){
        Node *dummy0=new Node(-1), *r0=dummy0;
        Node *dummy1=new Node(-1), *r1=dummy1;
        Node *curr=head;
        while(curr){
            if((curr->data)%2){
                r1->next=curr;
                r1=r1->next;
                curr=curr->next;
                r1->next=NULL;
            }
            else{   
                r0->next=curr;
                r0=r0->next;
                curr=curr->next;
                r0->next=NULL;
            }
            
        }
        r0->next=dummy1->next;
        return dummy0->next;
}
