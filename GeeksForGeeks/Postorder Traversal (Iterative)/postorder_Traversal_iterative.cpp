/* Tree Node
struct Node {
    int data;
    Node* left;
    Node* right;
};*/

class Solution{
    public:
    vector<int> postOrder(Node* node) {
        vector<int> tree;
        
        if(node == NULL){
            return tree;
        }
        
        stack<Node*> stack1, stack2;
        stack1.push(node);
        
        while(!stack1.empty()){
            node = stack1.top();
            stack1.pop();
            stack2.push(node);
            
            if(node->left != NULL){
                stack1.push(node->left);
            }
            
            if(node->right != NULL){
                stack1.push(node->right);
            }
        }
        
        while(!stack2.empty()){
            tree.push_back(stack2.top()->data);
            stack2.pop();
        }
        return tree;
    }
};
