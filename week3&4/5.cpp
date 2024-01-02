bool isPalindrome(ListNode* head) {
        string number;
        ListNode *curr=head;
        while(curr){
            number+=(to_string(curr->val));
            curr=curr->next;
        }
        int j=number.size()-1, i=0;
        while(i<=j){
            if(number[i]!=number[j])
                return false;
            i++;
            j--;
        }
        return true
    }
