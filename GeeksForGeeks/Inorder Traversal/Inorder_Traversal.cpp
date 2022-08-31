/* A binary tree node has data, pointer to left child
   and a pointer to right child
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
}; */

class Solution {
  public:
    // Function to return a list containing the inorder traversal of the tree.
    vector<int> inOrder(Node* root) {
        vector<int> tree;
        stack<Node*> stack;
        Node *temp = root;
        
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
                tree.push_back(temp->data);
                temp = temp->right;
            }
        }
        return tree;
    }
};
