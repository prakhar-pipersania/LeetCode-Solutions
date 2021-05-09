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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) 
    {
        ListNode *temp,*temp2;
        for(temp=list1;temp->next->val!=a;temp=temp->next);
        for(temp2=temp->next;temp2->val!=b;temp2=temp2->next);
        temp2=temp2->next;
        for(temp->next=list2;temp->next!=NULL;temp=temp->next);
        temp->next=temp2;
        return list1;
    }
};
