/* Linked List Node structure:
struct Node
{
    int data;
    struct Node *next;
}
*/

class Solution
{
    public:
    //Function to reverse a linked list.
    struct Node* reverseList(struct Node *head)
    {
        // code here
        Node* previous = NULL;
        Node* current = head;
        Node* nextPtr;
        
        while(current != NULL){
            nextPtr = current->next;
            current->next = previous;
            previous = current;
            current = nextPtr;
        }
        return previous;
        
        // return head of reversed list
    }
    
};
