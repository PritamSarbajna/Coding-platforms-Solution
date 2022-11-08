/* A binary tree node has data, pointer to left child
   and a pointer to right child /
struct Node
{
    int data;
    Node* left;
    Node* right;
}; */

// function should print the nodes at k distance from root
void solve(struct Node *root, vector<int> &ans, int k){
    if(root == NULL){
        return;
    }
    else if(k == 0){
        ans.push_back(root->data);
        return;
    }
    
    solve(root->left, ans, k-1);
    solve(root->right, ans, k-1);
}

vector<int> Kdistance(struct Node *root, int k){
    vector<int> ans;
    
    if(root == NULL){
        return ans;
    }
    
    solve(root,ans,k);
    return ans;
    
}
