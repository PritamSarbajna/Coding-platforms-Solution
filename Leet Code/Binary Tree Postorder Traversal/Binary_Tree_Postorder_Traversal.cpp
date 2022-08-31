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
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> tree;
        
        if(root == NULL){
            return tree;
        }
        
        stack<TreeNode*> stack1, stack2;
        stack1.push(root);
        
        while(!stack1.empty()){
            root = stack1.top();
            stack1.pop();
            stack2.push(root);
            
            if(root->left != NULL){
                stack1.push(root->left);
            }
            
            if(root->right != NULL){
                stack1.push(root->right);
            }
        }
        
        while(!stack2.empty()){
            tree.push_back(stack2.top()->val);
            stack2.pop();
        }
        
        return tree;
    }
};
