/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* middleNode(struct ListNode* head)
{
    struct ListNode *temp;
    int i=1;
    temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
        i++;
    }
    for(int j=0;j<(i/2);j++)
        head=head->next;
    return head;
}
