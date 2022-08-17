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
    bool leafSimilar(TreeNode* root1, TreeNode* root2) 
    {
        vector<int> leaves1;
        vector<int> leaves2;
        dfs(root1,leaves1);
        dfs(root2,leaves2);
        
        return leaves1 == leaves2;
    }
    void dfs(TreeNode* root1,vector<int> &leaves1)
    {
        if(!root1)
            return;
        if(root1 -> left == NULL && root1 -> right == NULL)
            leaves1.push_back(root1 -> val);
        dfs(root1 -> left,leaves1);
        dfs(root1 -> right,leaves1);   
    }
};