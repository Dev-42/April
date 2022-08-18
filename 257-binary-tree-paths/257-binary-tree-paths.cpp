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
    vector<string> binaryTreePaths(TreeNode* root)
    {
        vector<string> result;
        //Edge case
        if(!root)
            return result;
        
        binaryPaths(result,root,to_string(root -> val));
        return result;
    }
    void binaryPaths(vector<string> &result,TreeNode* root,string t)
    {
        if(!root -> left && !root -> right){
            result.push_back(t);
            return;
        }
        if(root -> left)
            binaryPaths(result,root -> left,t + "->" + to_string(root -> left -> val));
        if(root -> right)
            binaryPaths(result,root -> right,t + "->" + to_string(root -> right -> val));  
    }
};