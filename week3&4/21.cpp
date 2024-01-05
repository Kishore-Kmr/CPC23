void alternatingSplitList(struct Node* head) 
{
    Node *curr=head, *dummyA=new Node(-1), *dummyB=new Node(-1), *currA=dummyA, *currB=dummyB;
    bool turn=true;
    while(curr){
        if(turn){
            currA->next=curr;
            currA=currA->next;
        }
        else{
            currB->next=curr;
            currB=currB->next;
        }
        curr=curr->next;
        turn=!turn;
    }
    currA->next=NULL, currB->next=NULL;
    a=dummyA->next, b=dummyB->next;
}
