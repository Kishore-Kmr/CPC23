ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *A=headA, *B=headB;
        int count=2;
        while(A!=B){
            A=A->next;
            if(A==NULL){
                count--;
                if(count==0)
                    return NULL;
                A=headB;
            }    
            B=B->next;
            if(B==NULL)
                B=headA;
        }
        return A;
}
