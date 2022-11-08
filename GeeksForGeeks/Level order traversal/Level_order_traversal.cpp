/* A binary tree Node

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


class Solution
{
    public:
    //Function to return the level order traversal of a tree.
    vector<int> levelOrder(Node* node)
    {
      vector<int> tree;
      
      if(node == NULL){
          return tree;
      }
      
      queue<struct Node*> queue;
      queue.push(node);
      
      while(!queue.empty()){
        struct Node *temp = queue.front();
        queue.pop();
              
        if(temp->left != NULL){
          queue.push(temp->left);
        }
              
        if(temp->right != NULL){
            queue.push(temp->right);
        }
              
        tree.push_back(temp->data);
       }
        
        return tree;
    }
};
