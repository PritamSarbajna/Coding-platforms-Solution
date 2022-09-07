/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

class Solution{
  public:
    Node* reverse(Node *head){
        Node *prev = NULL;
        Node *curr = head;
        Node *nextPtr;
        
        while(curr != NULL){
            nextPtr = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextPtr;
        }
        return prev;
    }
    
    Node* getMid(Node *head){
        Node *slow = head;
        Node *fast = head->next;
        
        while(fast != NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
    //Function to check whether the list is palindrome.
    bool isPalindrome(Node *head)
    {
        if(head->next == NULL){
            return true;
        }
        
        Node *mid = getMid(head);
        
        Node *temp = mid->next;
        mid->next = reverse(temp);
        
        Node *head1 = head, *head2 = mid->next;
        
        while(head2 != NULL){
            if(head1->data != head2->data){
                return false;
            }
            head1 = head1->next;
            head2 = head2->next;
        }
        
        return true;
    }
};
