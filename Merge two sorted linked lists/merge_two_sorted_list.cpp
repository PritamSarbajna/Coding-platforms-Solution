/* Link list Node
struct Node {
  int data;
  struct Node *next;
  
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

Node* sortList(Node* first, Node* second){
    
    if(first->next == NULL){
        first->next = second;
        return first;
    }
    
    Node* curr1 = first;
    Node* next1 = curr1 -> next;
    
    Node* curr2 = second;
    Node* next2 = curr2 -> next;
    
    while(next1 != NULL && curr2 != NULL) {
        
        if( (curr2 -> data >= curr1 -> data ) && ( curr2 -> data <= next1 -> data)) {
            
            curr1 -> next = curr2;
            next2 = curr2 -> next;
            curr2 -> next = next1;
            
            curr1 = curr2;
            curr2 = next2;
        }
        else {
            curr1 = next1;
            next1 = next1->next;
            
            if(next1 == NULL){
                curr1->next = curr2;
                return first;
            }
        }
    }
    return first;
} 


//Function to merge two sorted linked list.
Node* sortedMerge(Node* head1, Node* head2)  
{  
    if(head1->data <= head2->data ){
        return sortList(head1, head2);
    }
    else
    {
        return sortList(head2, head1);
    }
}
