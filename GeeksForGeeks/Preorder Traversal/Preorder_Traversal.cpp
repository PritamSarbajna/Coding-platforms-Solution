/* A binary tree node has data, pointer to left child
   and a pointer to right child  

/*
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

//Function to return a list containing the preorder traversal of the tree.
vector <int> preorder(Node* root){
    vector<int> tree;
    
    if(root == NULL){
        return tree;
    }
    
    stack<Node*> stack;
    stack.push(root);
    
    while(!stack.empty()){
        root = stack.top();
        stack.pop();
        
        tree.push_back(root->data);
        
        if(root->right){
            stack.push(root->right);
        }
        if(root->left){
            stack.push(root->left);
        }
    }
    return tree;
  
}
