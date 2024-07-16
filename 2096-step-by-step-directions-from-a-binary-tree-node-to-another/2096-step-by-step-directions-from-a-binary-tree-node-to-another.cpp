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
    static TreeNode* findnode(TreeNode* root, int x, int y) {
        if (!root or root->val == x or root->val == y)
            return root;
        TreeNode* l = findnode(root->left, x, y);
        TreeNode* r = findnode(root->right, x, y);
        if (!l) return r;
        if (!r) return l;
        return root;
    }

    static bool findpath(TreeNode* root, int x, string& p, bool rev) {
        if (!root)
            return 0;
        if (root->val == x)
            return 1;

        p+= (rev ? 'U' : 'L');
        if (findpath(root->left, x, p, rev))
            return 1;
        p.pop_back();

        p += (rev ? 'U' : 'R');
        if (findpath(root->right, x, p, rev)) 
            return 1;
        p.pop_back();

        return 0;
    }
    string getDirections(TreeNode* root, int startValue, int destValue) {
        root = findnode(root, startValue, destValue);
        string pathFrom = "", pathTo = "";
        findpath(root,startValue,pathFrom,1);
        findpath(root,destValue,pathTo,0);
        return pathFrom + pathTo;
    }
};