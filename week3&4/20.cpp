struct Node* arrange(Node *head)
{
   Node *dummyV=new Node('-1'), *rV=dummyV;
   Node *dummyC=new Node('-1'), *rC=dummyC;
   Node *curr=head;
   while(curr){
       char c=curr->data;
       if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'){
           rV->next=curr;
           rV=rV->next;
           curr=curr->next;
           rV->next=NULL;
       }
       else{
           rC->next=curr;
           rC=rC->next;
           curr=curr->next;
           rC->next=NULL;
       }
   }
    rV->next=dummyC->next;
    return dummyV->next;
}
