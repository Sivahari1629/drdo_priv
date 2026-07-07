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
TreeNode* search(TreeNode* root, int x)
{
    if(root == NULL) return NULL;

    if(root->val == x) return root;

    TreeNode* left = search(root->left, x);
    if(left != NULL) return left;

    return search(root->right, x);
}
void swapy(TreeNode* root, int x,int y)
{
    TreeNode* root1=search(root,x);
    TreeNode* root2=search(root,y);
    swap(root1->val,root2->val);
    
}
    void inorder(TreeNode* root,vector<int>&ans)
    {
        if(root==NULL)
        {
            return;
        }
      
       
        inorder(root->left,ans);
        ans.push_back(root->val);
        inorder(root->right,ans);
       
       
        
        
    }
    void recoverTree(TreeNode* root) {
        if(root==NULL)
        {
            return;
        }
        vector<int>ans;
        inorder(root,ans);
        int x=0;
        int y=0;
        for(int i=0;i<ans.size()-1;i++)
        {
            if(ans[i]>ans[i+1])
            {
                if(x==0)
                {x=ans[i];
                }
                y=ans[i+1];
            }
        }
        swapy(root,x,y);
    }
};