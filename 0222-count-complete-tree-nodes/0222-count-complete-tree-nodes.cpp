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
int countright(TreeNode* root)
{
    int rightcount=0;
    if(root==NULL)
    {
        return 0;
    }
    while(root)
    {
        root=root->right;
        rightcount++;
    }
    return rightcount ;
}
int countleft(TreeNode* root)
{
    int leftcount=0;
    if(root==NULL)
    {
        return 0;
    }
    while(root)
    {
        root=root->left;
        leftcount++;
    }
    return leftcount;
}
    int countNodes(TreeNode* root) {
        
       int left= countleft(root);
        int right=countright(root);
        if(left==right)
        {
            return (1<<left)-1;
        }
        return 1+countNodes(root->left)+countNodes(root->right);
    }
};