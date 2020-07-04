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
    ListNode* deleteDuplicates(ListNode* head) 
    {
        ListNode *temp,*temp2; 
        map<int,int> count;
        for(temp=head;temp!=NULL;temp=temp->next)
            count[temp->val]++;
        for(auto e=begin(count);e!=end(count);e++)
        {
            if(e->second>1)
            {
                while(e->second>0)
                {
                    head=head->next;
                    e->second=e->second-1;
                }
            }
            else
            {
                break;
            }
        }
        if(head!=NULL&&head->next!=NULL)
        {
            for(temp=head,temp2=head->next;temp!=NULL&&temp2!=NULL;)
            {
                if(count[temp2->val]>1)
                {
                    while(count[temp2->val]>1)
                    {
                        temp2=temp2->next;
                        count[temp2->val]--;
                    }
                    temp->next=temp2->next;
                    temp2=temp2->next;
                }
                else
                {
                    temp=temp->next;
                    temp2=temp2->next;
                }
            }
        }
        return head;
    }
};

