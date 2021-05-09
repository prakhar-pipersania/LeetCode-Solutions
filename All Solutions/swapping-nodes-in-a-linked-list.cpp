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
    ListNode* swapNodes(ListNode* head, int k) 
    {
        if(head->next==NULL)
            return head;
        int c=0;
        ListNode *temp,*temp2;
        for(temp=head;temp!=NULL;temp=temp->next,c++);
        c+=1-k;
        for(temp=head;k-1;temp=temp->next,k--);
        for(temp2=head;c-1;temp2=temp2->next,c--);
        if(temp->val!=temp2->val)
            temp->val^=temp2->val^=temp->val^=temp2->val;
        return head;
    }
};