/* The Node structure is
struct Node
{
    int data;
    Node* left;
    Node* right;
}; */

class Solution{
  public:
    /*You are required to complete this method*/
    int minDepth(struct Node* node){
        if(node==NULL){
            return 0;
        }
        
        if(node->left == NULL || node->right == NULL){
            return max(minDepth(node->left), minDepth(node->right)) + 1;
        }
        
        return min(minDepth(node->left), minDepth(node->right)) + 1;
    }
};
