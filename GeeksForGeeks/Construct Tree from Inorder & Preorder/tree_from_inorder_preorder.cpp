/*Complete the code here.
Node is as follows:
struct Node
{
  int data;
  Node* left;
  Node* right;
};
*/
class Solution{
    public:
    
    int findPosition(int in[], int n, int element){
        for(int i=0; i<n; i++){
            if(in[i] == element){
                return i;
            }
        }
    }
    
    Node* createTree(int in[], int pre[], int &preOrderIndex, int inOrderStart, int inOrderEnd, int size){
        
        // Base case
        if(preOrderIndex >= size || inOrderStart > inOrderEnd){
            return NULL;
        }
        
        int element = pre[preOrderIndex++];
        Node *root = new Node(element);
        int position = findPosition(in, size, element);
        
        // Recursion
        root->left = createTree(in, pre, preOrderIndex, inOrderStart, position-1, size);
        root->right = createTree(in, pre, preOrderIndex, position+1, inOrderEnd, size);
        
        return root;
    }
    
    Node* buildTree(int in[],int pre[], int n)
    {
        int preOrderIndex = 0;
        Node* tree = createTree(in, pre, preOrderIndex, 0, n-1, n);
        return tree;
    }
};
