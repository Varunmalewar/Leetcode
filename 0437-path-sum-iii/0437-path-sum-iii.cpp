class Solution {
public:
    // Count paths starting at `node` that sum to targetSum
    int countFromNode(TreeNode* node, long long currentSum, int targetSum) {
        if (node == nullptr) return 0;

        currentSum += node->val;
        int count = (currentSum == targetSum) ? 1 : 0;

        count += countFromNode(node->left, currentSum, targetSum);
        count += countFromNode(node->right, currentSum, targetSum);

        return count;
    }

    int pathSum(TreeNode* root, int targetSum) {
        if (root == nullptr) return 0;

        // Paths starting from root + paths in left/right subtrees
        return countFromNode(root, 0, targetSum)
             + pathSum(root->left, targetSum)
             + pathSum(root->right, targetSum);
    }
};