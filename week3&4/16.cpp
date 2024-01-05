Node* reverse(Node *head){
	Node *prev=NULL, *curr=head;
	while(curr){
		Node *temp=curr->next;
		curr->next=prev;
		prev=curr;
		curr=temp;
	}
	return prev;
}

Node* reverseAlternateKNodes(Node* head, int k){
	Node *dummy=new Node(0), *left=dummy;
	dummy->next=head;
	while(left){
		Node *right=left;
		for(int i=0;right&&i<k;i++)
			right=right->next;
		if(right==NULL){
			left->next=reverse(left->next);
			break;
		}
		Node *temp1=right->next, *temp2=left->next;
		right->next=NULL;
		left->next=reverse(left->next);
		temp2->next=temp1;
		left=temp2;
		for(int i=0;left&&i<k;i++)
			left=left->next;
	}
	return dummy->next;
}
