void merge(Node *p, Node **q)  
{  
    Node *p_curr = p, *q_curr = *q;    
    while (p_curr&& q_curr)  
    {  
        Node *temp=p_curr->next;
        p_curr->next=q_curr;
        q_curr=q_curr->next;
        p_curr->next->next=temp;
        p_curr=temp;
    }    
}  
