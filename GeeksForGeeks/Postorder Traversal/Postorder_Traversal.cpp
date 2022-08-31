//User function Template for C++

/* A binary tree node has data, pointer to left child
   and a pointer to right child  
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
}; */

//Function to return a list containing the postorder traversal of the tree.
vector <int> postOrder(Node* root)
{
    vector<int> tree;
    
    if(root == NULL){
        return tree;
    }
    
    stack<Node*> stack1, stack2;
    stack1.push(root);
    
    while(!stack1.empty()){
        root = stack1.top();
        stack1.pop();
        stack2.push(root);
        
        if(root->left != NULL){
            stack1.push(root->left);
        }
        
        if(root->right != NULL){
            stack1.push(root->right);
        }
    }
    
    while(!stack2.empty()){
        tree.push_back(stack2.top()->data);
        stack2.pop();
    }
    
    return tree;
}
