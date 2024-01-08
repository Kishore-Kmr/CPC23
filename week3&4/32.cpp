ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *curr1=l1, *curr2=l2, *dummy=new ListNode(-1), *curr=dummy;
        int sum=0, carry=0;
        while(curr1||curr2||carry){
            int v1=0, v2=0;
            if(curr1){
                v1=curr1->val;
                curr1=curr1->next;
            }
            if(curr2){
                v2=curr2->val;
                curr2=curr2->next;
            }    
            sum=(v1+v2+carry)%10;
            carry=(v1+v2+carry)/10;
            curr->next=new ListNode(sum);
            curr=curr->next;
        }
        return dummy->next;
}
