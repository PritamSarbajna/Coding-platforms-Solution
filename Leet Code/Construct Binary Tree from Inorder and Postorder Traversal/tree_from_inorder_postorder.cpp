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
    int index;
    
    TreeNode* construct(vector<int> inorder, vector<int> postorder, int inStart, int inEnd){
        
        // Base case
        if(index < 0 || inStart > inEnd){
            return NULL;
        }
        
        int element = postorder[index--];
        TreeNode *root = new TreeNode(element);
        int position = find(inorder.begin(), inorder.end(), element) - inorder.begin();
        
        // Recursion
        root->right = construct(inorder, postorder, position+1, inEnd);
        root->left = construct(inorder, postorder, inStart, position-1);
        
        return root;
    }
    
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        index = postorder.size()-1;
        TreeNode *tree = construct(inorder, postorder, 0, inorder.size()-1);
        return tree;
    }
};
