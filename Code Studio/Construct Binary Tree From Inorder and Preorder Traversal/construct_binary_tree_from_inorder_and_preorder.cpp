/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
#include <bits/stdc++.h>
TreeNode<int>* construct(vector<int> inorder, vector<int> preorder, int &index, int inStart, int inEnd){
    
    // Base case
    if(index >= preorder.size() || inStart > inEnd){
        return NULL;
    }
    
    int element = preorder[index++];
    TreeNode<int> *root = new TreeNode<int>(element);
    int pos = find(inorder.begin(), inorder.end(), element) - inorder.begin(); 
    
    root->left = construct(inorder, preorder, index, inStart, pos-1);
    root->right = construct(inorder, preorder, index, pos+1, inEnd);
    
    return root;
}

TreeNode<int> *buildBinaryTree(vector<int> &inorder, vector<int> &preorder)
{
	int index = 0;
    TreeNode<int> *tree = construct(inorder, preorder, index, 0, preorder.size()-1);
    return tree;
}
