/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int findmax(vector<int> &nums,int start,int end)
    {
        int m=start;
        for(short i=start;i<=end;i++)
            if(nums[i]>nums[m])
                m=i;
        return m;
    }
    TreeNode* construct(vector<int> &nums,int start,int end) 
    {
        TreeNode* root=new TreeNode;
        int i=findmax(nums,start,end);
        root->val=nums[i];
        if(start<=i-1)
            root->left=construct(nums,start,i-1);
        if(i+1<=end)
            root->right=construct(nums,i+1,end);
        return root;
    }
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) 
    {
        return construct(nums,0,nums.size()-1);
    }
};
