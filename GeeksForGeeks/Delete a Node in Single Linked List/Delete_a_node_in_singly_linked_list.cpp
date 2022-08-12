/* Link list Node 
struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};
*/

/*You are required to complete below method*/
Node* deleteNode(Node *head,int x)
{
   if(x==1){
       head = head->next;
       return head;
   }
   
   Node* temp = head;
   
   for(int i=1;i<x-1;i++){
       temp = temp->next;
   }
   
   temp->next = temp->next->next;
   return head;
   
}
