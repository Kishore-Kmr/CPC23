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
    void reorderList(ListNode* head) {
        ListNode *fast=head->next, *slow=head;
        while(fast&&fast->next){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode *l2=reverse(slow->next);
        slow->next=NULL;
        ListNode *l1=head;
        while(l2){
            ListNode *temp1=l1->next, *temp2=l2->next;
            l1->next=l2;
            l2->next=temp1;
            l1=temp1;
            l2=temp2;
        }
    }
