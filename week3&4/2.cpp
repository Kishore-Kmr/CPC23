ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *start=head, *end=head;
        for(int i=0;i<n;i++)
            end=end->next;
        if(end==NULL)
            return head->next;
        while(end->next){
            start=start->next;
            end=end->next;
        }
        start->next=(start->next)->next;
        return head;

}
