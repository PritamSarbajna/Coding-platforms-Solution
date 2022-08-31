```
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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> tree;
        
        if(root == NULL){
            return tree;
        }
        
        queue<TreeNode*> queue;
        queue.push(root);
        
        while(!queue.empty()){
            
            vector<int> level;
            int n = queue.size();
            
            for(int i=0; i<n; i++){
                TreeNode *temp = queue.front();
                queue.pop();
                
                if(temp->left != NULL){
                    queue.push(temp->left);
                }
                
                if(temp->right != NULL){
                    queue.push(temp->right);
                }
                
                level.push_back(temp->val);
            }
            tree.push_back(level);
        }
        return tree;
    }
};
```
