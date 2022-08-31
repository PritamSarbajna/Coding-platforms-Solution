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
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> tree;
        stack<TreeNode*> stack;
        TreeNode *temp = root;
        
        while(true){
            if(temp != NULL){
                stack.push(temp);
                temp = temp->left;
            }
            else{
                
                if(stack.empty()){
                    break;
                }
                temp = stack.top();
                stack.pop();
                tree.push_back(temp->val);
                temp = temp->right;
            }
        }
        
        return tree;
    }
};
