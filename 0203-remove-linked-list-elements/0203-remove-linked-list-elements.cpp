class Solution {
public:
    ListNode* removeElements(ListNode* head, int T) {
        ListNode *dummy = new ListNode(-1, head), *prev = dummy;
       while(head )
       {if(head -> val != T) 
                prev = head; 
            else                                    
				prev -> next = head -> next;
        head=head->next;
       }
        return dummy -> next;                     
    }
};