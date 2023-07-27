class Solution {
public:
    bool rec(TreeNode*root1,TreeNode*root2){
        if(root1==NULL&&root2==NULL)return true;
        if(root1==NULL||root2==NULL)return false;
        if(root1->val!=root2->val)return false;
        return rec(root1->left,root2->right)&&rec(root1->right,root2->left);
    }
    bool isSymmetric(TreeNode* root) {
        if(root==NULL)return 1;
        return rec(root->left,root->right);

    }
};