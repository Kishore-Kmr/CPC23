Node *copyList(Node *head){
        Node *dummy=new Node(-1), *curr=dummy, *h=head;
        unordered_map<Node*, Node*> mp;
        while(h){
            curr->next=new Node(h->data);
            curr=curr->next;
            mp[h]=curr;
            h=h->next;
        }
        curr=dummy->next, h=head;
        while(curr){
            curr->arb=mp[h->arb];
            h=h->next;
            curr=curr->next;
        }
        return dummy->next;
}
