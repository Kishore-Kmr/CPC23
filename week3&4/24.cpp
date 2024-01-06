ListNode* deleteDuplicates(ListNode* head) {
        ListNode *dummy=new ListNode(-1), *curr=dummy;
        dummy->next=head;
        while(curr->next&&curr->next->next){
            if(curr->next->val!=curr->next->next->val)
                curr=curr->next;
            else{
                int num=curr->next->val;
                ListNode *temp=curr->next;
                while(temp&&temp->val==num)
                    temp=temp->next;
                curr->next=temp;
            }
        }
        return dummy->next;
}
