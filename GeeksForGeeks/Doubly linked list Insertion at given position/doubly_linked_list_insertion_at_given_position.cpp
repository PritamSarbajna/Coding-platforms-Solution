/* a Node of the doubly linked list 
struct Node
{
  int data;
  struct Node *next;
  struct Node *prev;
  Node(int x) { data = x; next = prev = NULL; }
}; */

//Function to insert a new node at given position in doubly linked list.
void addNode(Node *head, int pos, int data){
  
   struct Node* newNode = new Node(data);
   
   struct Node* temp = head;
   
   while(pos--){
       temp = temp->next;
   }
   
   if(temp->next == NULL){
       temp->next = newNode;
       newNode->prev = temp;
       return;
   }
   
   newNode->next = temp->next;
   temp->next->prev = newNode;
   temp->next = newNode;
   newNode->prev = temp;
}
