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
TreeNode* rightt(TreeNode* root)
{
    if(root->right==NULL)
    {
        return root;
    }
    return rightt(root->right);
}
    TreeNode* helper(TreeNode* root)
    {
        if(root->left==NULL)
        {
            return root->right;
        }

        if(root->right==NULL)
        {
            return root->left;
        }
        TreeNode* currright=root->right;
        TreeNode* rightmost=rightt(root->left);
        rightmost->right=currright;

        return root->left;
    }
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root==NULL)
        {
            return NULL;
        }
        
         if(root->val<key)
        {
            root->right=deleteNode(root->right,key);

        }
        
        if(root->val>key)
        {
            root->left=deleteNode(root->left,key);
        }
        
        if(root->val==key){
            return helper(root);
        }
       
        return root;
    }
};