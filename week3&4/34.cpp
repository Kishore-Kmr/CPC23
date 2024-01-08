Node* pairWiseSwap(struct Node* head) {
        Node *dummy=new Node(-1), *curr=dummy;
        dummy->next=head;
        while(curr->next&&curr->next->next){
            Node *temp1=curr->next, *temp2=curr->next->next->next;
            curr->next=curr->next->next;
            curr->next->next=temp1;
            temp1->next=temp2;
            curr=curr->next->next;
        }
        return dummy->next;
}
