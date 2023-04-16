struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};
 */

class Solution{
    public:
    //Function to check whether a binary tree is balanced or not.
    bool isBalanced(Node *root)
    {
        return (height(root) != -1);
    }
    
    int height(Node *root){
        if(root == NULL){
            return 0;
        }
        
        int lh = height(root->left);
        if(lh == -1) return lh;
        
        int rh = height(root->right);
        if(rh == -1) return rh;
        
        if(abs(lh-rh) > 1) return -1;
        
        return max(lh, rh)+1;
    }
};
