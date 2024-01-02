ListNode *curr=head->next, *prev=head;
while(prev){
	delete prev;
	prev=curr;
  	if(curr->next!=NULL)
      	curr=curr->next;
}
