ListNode* merge(ListNode* head1, ListNode* head2){
        ListNode *dummy=new ListNode(), *curr=dummy, *h1=head1, *h2=head2;
        while(h1&&h2){
            if(h1->val<=h2->val){
                curr->next=h1;
                h1=h1->next;
            }
            else{
                curr->next=h2;
                h2=h2->next;
            }
            curr=curr->next;
        }
        if(h1==NULL)
            curr->next=h2;
        else
            curr->next=h1;
        return dummy->next;
}
    ListNode* sortList(ListNode* head) {
        if(head==NULL||head->next==NULL)
            return head;
        ListNode *slow=head, *fast=head->next;
        while(fast&&fast->next){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode *h2=sortList(slow->next);
        slow->next=NULL;
        ListNode *h1=sortList(head);
        return merge(h1, h2);
    }
