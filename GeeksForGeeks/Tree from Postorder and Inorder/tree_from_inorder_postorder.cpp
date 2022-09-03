/* Tree node structure

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};*/

int findPosition(int in[], int n, int key){
    for(int i=0; i<n; i++){
        if(in[i] == key){
            return i;
        }
    }
}

Node* construct(int in[], int post[], int &idx, int inOrderStart, int inOrderEnd, int size){
    
    // Base case
    if(idx < 0 || inOrderStart > inOrderEnd){
        return NULL;
    }
    
    int element = post[idx--];
    Node *root = new Node(element);
    int position = findPosition(in, size, element);
    
    // Recursion
    root->right =  construct(in, post, idx, position+1, inOrderEnd, size);
    root->left = construct(in, post, idx, inOrderStart, position-1, size);
    
    return root;
}

//Function to return a tree created from postorder and inoreder traversals.
Node *buildTree(int in[], int post[], int n) {
    int idx = n-1;
    Node *tree = construct(in, post, idx, 0, n-1, n);
    return tree;
}
