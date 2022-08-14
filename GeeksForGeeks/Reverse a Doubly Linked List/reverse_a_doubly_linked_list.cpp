/*
struct Node
{
    int data;
    Node * next;
    Node * prev;
    Node (int x)
    {
        data=x;
        next=NULL;
        prev=NULL;
    }
        
};
*/
Node* reverseDLL(Node * head)
{
    if(head == NULL || head->next == NULL)
        return head;
        
    Node* curr = head;
    Node* next;
    
    while(curr->next != NULL){
        next = curr->next;
        curr->next = curr->prev;
        curr->prev = next;
        curr = next;
    }
    
    curr->next = curr->prev;
    curr->prev = NULL;
    
    return curr;
}
