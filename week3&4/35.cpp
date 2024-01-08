ListNode* swapNodes(ListNode* head, int k) {
        ListNode *dummy=new ListNode(-1, head), *p1=dummy, *p2=dummy, *curr=dummy;
        for(int i=0;i<k-1;i++)
            p1=p1->next;
        for(int i=0;i<k+1;i++)
            curr=curr->next;
        while(curr){
            curr=curr->next;
            p2=p2->next;
        }
        if(p1->next==p2||p2->next==p1){
            if(p2->next==p1)
                swap(p1, p2);
            ListNode *temp=p2->next->next;
            p1->next=p2->next;
            p1->next->next=p2;
            p2->next=temp;
        }
        else{
            ListNode *temp1=p1->next->next, *temp2=p2->next->next;
            curr=p1->next;
            p1->next=p2->next;
            p1->next->next=temp1;
            p2->next=curr;
            curr->next=temp2;
        }
        return dummy->next;
}
