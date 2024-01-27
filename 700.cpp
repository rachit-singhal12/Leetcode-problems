class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val) {
        TreeNode *curr = root;
        while(curr!=NULL)
        {
            if(val==curr->val)return curr;
            if(val>curr->val)curr = curr->right;
            else curr=curr->left;
        }
        return nullptr;
    }
};