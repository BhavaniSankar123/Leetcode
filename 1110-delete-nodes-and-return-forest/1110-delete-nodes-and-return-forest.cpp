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
    bool b[1001]={};
    void del(TreeNode* &root,bool f,vector<TreeNode*> &ans)
    {
        if(root==NULL)
            return;
        del(root->left,b[root->val],ans);
        del(root->right,b[root->val],ans);
        if(!b[root->val] and f)
          ans.push_back(root);
        if(b[root->val])
            root=NULL;
    }
    vector<TreeNode*> delNodes(TreeNode* root, vector<int>& to_delete) {
        vector<TreeNode*> ans;
        for(int i: to_delete)
            b[i]=true;
        del(root,true,ans);
        return ans;
    }
};