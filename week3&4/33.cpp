long long  multiplyTwoLists (Node* l1, Node* l2)
{
    long long mod=1e9+7, n1=0, n2=0;
    while(l1||l2){
        if(l1){
            n1=((n1*10)%mod+l1->data)%mod;
            l1=l1->next;
        }
        if(l2){
            n2=((n2*10)%mod+l2->data)%mod;
            l2=l2->next;
        }
    }
    return (n1*n2)%mod;
}
