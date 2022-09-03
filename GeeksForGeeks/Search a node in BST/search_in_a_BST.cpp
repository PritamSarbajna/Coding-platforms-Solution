// Function to search a node in BST.
bool search(Node* root, int x) {
    // Base case
    if(root == NULL){
        return false;
    }
    
    if(root->data == x){
        return true;
    }
    
    
    // Recursion
    if(root->data > x){
        return search(root->left, x);
    }
    else{
        return search(root->right, x);
    }
}



// More optimized code --->

// Function to search a node in BST.
bool search(Node* root, int x) {
    Node *temp = root;
    
    while(temp != NULL){
        if(temp->data == x){
            return true;
        }
        
        if(temp->data > x){
            temp = temp->left;
        }
        else{
            temp = temp->right;
        }
    }
    return false;
}
