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
    
    int height(TreeNode* root) {
        if(root == NULL) return 0; 

        int LH = height(root->left); 
        if (LH == -1) return -1; 

        int RH = height(root->right); 
        if (RH == -1) return -1;

        if( abs(LH - RH) > 1 ) return -1;

        return 1 + max(LH, RH); 
    }
    bool isBalanced(TreeNode* root) {
        return height(root) != -1 ; 


    }
};
