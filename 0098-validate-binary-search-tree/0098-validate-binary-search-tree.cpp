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
    bool isBSTValid(TreeNode* node, long long mini, long long maxi){
        if(node==NULL) return true;
        if(node->val>=maxi || node->val<=mini) return false;
        return isBSTValid(node->left, mini, node->val)&&
        isBSTValid(node->right,node->val,maxi);
    }
    bool isValidBST(TreeNode* root) {
         return isBSTValid(root,LLONG_MIN,LLONG_MAX);
    }
};