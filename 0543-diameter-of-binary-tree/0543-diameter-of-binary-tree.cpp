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
int ans = 0;
    int height(TreeNode* root){
        if(root == NULL){
            return 0;
        }
        int leftheight = height(root->left);
        int rightheight = height(root->right);
        ans = max(ans,leftheight + rightheight);
        return max(leftheight, rightheight) + 1;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        // if (root == NULL) return 0;
        // int option1 = diameterOfBinaryTree(root->left);
        // int option2 = diameterOfBinaryTree(root->right);
        // int option3 = height(root->left) + height(root->right);

        // int ans = max(option1, max(option2,option3));
        height(root);

        return ans ;
    }
};