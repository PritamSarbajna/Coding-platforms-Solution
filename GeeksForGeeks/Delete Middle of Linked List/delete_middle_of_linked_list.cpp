/* Link list Node:

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

// Deletes middle of linked list and returns head of the modified list
Node* deleteMid(Node* head)
{
    struct Node* temp = head;
    int size = 0;
    
    while(temp!=NULL){
        temp = temp->next;
        size++;
    }
    
    if(size==2){
        head->next = NULL;
        return head;
    }
    
    temp = head;
    for(int i=0; i<size/2; i++){
        temp = temp->next;
    }
    
    temp->data = temp->next->data;
    temp->next = temp->next->next;
    
    return head;
}
