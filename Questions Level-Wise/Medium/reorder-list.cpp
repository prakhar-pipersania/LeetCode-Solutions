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
    ListNode* rev(ListNode* head)
    {
        int i=0;
        stack<ListNode*> x;
        for(;head!=NULL;head=head->next,i++)
            x.push(head);
        for(ListNode* temp;i>0;i--)
        {
            head==NULL?temp=head=x.top():temp=temp->next=x.top();
            x.pop(),temp->next=NULL;
        }
        return head;
    }
    void reorderList(ListNode* head) 
    {
        int c=0;
        ListNode *temp,*temp2,*temp3;
        for(temp=head;temp!=NULL;temp=temp->next,c++){}
        if(c>2)
        {
            for(c/=2,temp=head;c>0;c--,temp=temp->next){}
            temp2=rev(temp->next),temp->next=NULL;
            for(temp=head;temp2!=NULL;temp=temp->next->next)
                temp3=temp2,temp2=temp2->next,temp3->next=temp->next,temp->next=temp3;
        }
    }
};
