void removeLoop(Node* head)
{
        Node *newHead=new Node(0);
        newHead->next=head;
        Node *fast=newHead, *slow=newHead, *slow1=newHead;
        bool flag=false;
        while(fast&&fast->next){
            fast=fast->next->next;
            slow=slow->next;
            if(fast==slow){
                flag=true;
                break;
            }
        }
        if(flag){
            while(slow1->next!=slow->next){
                slow1=slow1->next;
                slow=slow->next;
            }
            slow->next=NULL;
        }
        delete newHead;
        
}
