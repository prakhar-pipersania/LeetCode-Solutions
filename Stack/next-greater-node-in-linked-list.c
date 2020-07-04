/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* nextLargerNodes(struct ListNode* head, int* returnSize)
{
    int c=0,k=0,*a=(int*)calloc(sizeof(int),11000);
    struct ListNode *temp,*temp2;
    for(temp=head;temp!=NULL;temp=temp->next)
    {
        for(temp2=temp->next;temp2!=NULL;temp2=temp2->next)
        {
            if(temp2->val>temp->val)
            {
                a[k++]=temp2->val;
                break;
            }
            if(temp2->next==NULL)
                k++;
        }
        c++;
    }
    *returnSize=c;
    return a;
}
