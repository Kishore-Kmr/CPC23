void deleteAlt(struct Node *head){
    struct Node *curr=head;
    while(curr&&curr->next){
        struct Node* temp=curr->next;
        curr->next=temp->next;
        delete temp;
        curr=curr->next;
    }
}
