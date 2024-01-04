ListNode* reverse(ListNode *head){
        ListNode *curr=head, *prev=NULL;
        while(curr){
            ListNode *temp=curr->next;
            curr->next=prev;
            prev=curr;
            curr=temp;
        }
        return prev;
    }
ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode *dummy=new ListNode(0), *prev=dummy, *start=head;
        while(start){
            ListNode *end=start;
            for(int i=0;end&&i<k-1;i++)
                end=end->next;
            if(end==NULL){
                prev->next=start;
                break;
            }
            ListNode *temp=end->next;
            end->next=NULL;
            end=reverse(start);
            prev->next=end;
            prev=start;
            start=temp;
        }
        return dummy->next;
}
