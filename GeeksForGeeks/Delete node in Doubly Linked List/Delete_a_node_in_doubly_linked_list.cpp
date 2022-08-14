/* Structure of Node
struct Node
{
  int data;
  struct Node *next;
  struct Node *prev;
  
  Node(int x){
      data = x;
      next = NULL;
      prev = NULL;
  }
  
};
*/

class Solution
{
    public:
    Node* deleteNode(Node *head_ref, int x)
    {
      struct Node* temp = head_ref;
      
        if(x==1){
            struct Node* toDelete = temp;
            temp = temp->next;
            temp->prev = NULL;
            head_ref = temp;
            delete toDelete;
            return head_ref;
        }
        
        for(int i=1; i<x; i++){
            temp = temp->next;
        }
        
        if(temp->next == NULL){
            struct Node* toDelete = temp;
            temp->prev->next = NULL;
            delete toDelete;
            return head_ref;
        }
        
        struct Node* toDelete = temp;
        temp->prev->next = temp->next;
        temp->next->prev = temp->prev;
        delete toDelete;
        return head_ref;
    }
};
