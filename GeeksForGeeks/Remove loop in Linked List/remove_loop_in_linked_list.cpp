/*
structure of linked list node:

struct Node
{
    int data;
    Node* next;
    
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

*/

class Solution
{
    public:
    
    Node *detectLoop(Node *head){
        Node *slow = head, *fast = head;
        
        while(fast != NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
            
            if(slow == fast){
                return slow;
            }
        }
        return NULL;
    }
    //Function to remove a loop in the linked list.
    void removeLoop(Node* head)
    {
        if(head == NULL || detectLoop(head) == NULL){
            return;
        }
        
        Node *slow = detectLoop(head), *fast = head;
        
        if(slow == head){
            while(slow->next!=head){
                slow=slow->next ;
            }
            slow->next=NULL ;
            return ;
        }
        
        while(slow->next != fast->next){
            slow = slow->next;
            fast = fast->next;
        }
        
        slow->next = NULL;
        
    }
};
