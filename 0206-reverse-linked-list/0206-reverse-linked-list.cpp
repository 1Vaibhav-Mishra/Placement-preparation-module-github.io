/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev=nullptr;
            ListNode* curr=head;
            ListNode* temp;
        int n=0;
        while(curr)
        {
            temp=curr->next;
            curr->next=prev;
            prev=curr;
            curr=temp;
        }
        return prev;
        // while(curr)
        // {
        //     n++;
        //     curr=curr->next;
        // }
        // prev=curr;
        // for(int i=0;i<n/2;i++)
        // {
        //     temp=
        // }
        // return prev;
    }
};