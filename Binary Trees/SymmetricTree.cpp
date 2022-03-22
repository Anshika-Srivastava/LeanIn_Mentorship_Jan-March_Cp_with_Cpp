class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        if(!root)
            return true;
        return isSymmetric1(root->left, root->right);   
    }
    
    bool isSymmetric1(TreeNode* root1, TreeNode* root2)
    {
        if(!root1 && !root2)
            return true;
        if(root1 && root2 && root1->val == root2->val)
            return isSymmetric1(root1->left, root2->right) &&  isSymmetric1(root1->right, root2->left);
        return false;     
            
    }
};
