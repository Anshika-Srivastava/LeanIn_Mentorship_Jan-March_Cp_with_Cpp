class Solution {
public:
    int ans = 0;    
    int sumOfLeftLeaves(TreeNode* root, bool left = false) {
        if(root == NULL) return 0;
        if(root->left == NULL and root->right == NULL && left)  ans += root->val;
        sumOfLeftLeaves(root->left, true);
        sumOfLeftLeaves(root->right, false);
        return ans;
    }
};
