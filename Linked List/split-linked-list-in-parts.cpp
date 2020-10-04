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
    vector<ListNode*> splitListToParts(ListNode* root, int k)
    {
        int len=0,extra,cur=0;
        ListNode* temp;
        vector<ListNode*> x(k);
        for(temp=root;temp!=NULL;temp=temp->next,len++);
        extra=len%k,len/=k;
        while(root!=NULL)
        {
            x[cur++]=root;
            if(!extra)
            {
                for(int i=0;i<len-1;i++,root=root->next);
            }
            else
            {
                for(int i=0;i<len;i++,root=root->next);
                extra--;
            }
            temp=root->next;
            root->next=NULL;
            root=temp;
        }
        return x;
    }
};
