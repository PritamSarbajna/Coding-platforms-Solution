/* Tree Node
struct Node {
    int data;
    Node* left;
    Node* right;
};*/

class Solution {
public:
    vector<int> inOrder(Node* root)
    {
        vector<int> tree;
        stack<Node*> stack;
        Node* temp = root;
        
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
