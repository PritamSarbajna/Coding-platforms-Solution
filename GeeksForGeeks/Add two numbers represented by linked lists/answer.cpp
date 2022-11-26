/* node for linked list:

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/

class Solution
{
    public:
    //Function to add two numbers represented by linked list.
    
    struct Node* reverse(struct Node* l1){

        struct Node* p = l1, *q = NULL, *r = NULL;

        while(p!=NULL){
            r = q;
            q = p;
            p = p->next;
            q->next = r;

        }

        return q;

    }
    
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        first = reverse(first);
        second = reverse(second);
        
        Node* ans = new Node(0);
        Node* temp = ans;
        int carry = 0;
        
        while(first != NULL || second != NULL || carry){
            int sum = 0;
            
            if(first != NULL){
                sum += first->data;
                first = first->next;
            }
            
            if(second != NULL){
                sum += second->data;
                second = second->next;
            }
            
            sum += carry;
            carry = sum/10;
            Node* newNode = new Node(sum%10);
            temp->next = newNode;
            temp = temp->next;
        }
        
        return reverse(ans->next);
    }
};
