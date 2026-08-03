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
unordered_map<int,int>m;
//     int search(vector<int>&inorder, int left , int right , int target){
//         for(int i = left; i<=right; i++){
//             if(inorder[i] == target) {
//                 return i;
//             }
        
//     }
//             return -1;
//  }
    // TreeNode *helper(vector<int>& preorder, vector<int>& inorder, int &preIdx,int left, int right){
    //     if(left > right) return NULL;

    //     TreeNode *root = new TreeNode(preorder[preIdx]);

    //     int intidx = search(inorder, left , right, preorder[preIdx]);

    //     preIdx++;

    //     root->left = helper(preorder, inorder, preIdx, left , intidx - 1);
    //     root->right = helper(preorder, inorder, preIdx , intidx + 1, right);

    //     return root;
    // }
    TreeNode* helper(vector<int>&preorder, vector<int>&inorder ,int left, int right, int &preIdx){
        if(left > right) return NULL;

        int rootvalue = preorder[preIdx];
        TreeNode* root = new TreeNode(rootvalue);
        preIdx++;

        int mid = m[root->val];

        root->left = helper(preorder, inorder, left , mid-1, preIdx);
        root->right = helper(preorder, inorder , mid+1, right , preIdx);

        return root;
    }

    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int preIdx = 0;
        for(int i = 0; i<=inorder.size() -1 ; i++){
            m[inorder[i]] = i;
        }
        return helper(preorder,inorder, 0 , inorder.size() -1, preIdx);
        
    }
};