ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL)
            return head;
        ListNode *curr=head;
        while(curr->next){
            if(curr->val==curr->next->val)
                curr->next=curr->next->next;
            else   
                curr=curr->next;
        }
        return head;
    }
