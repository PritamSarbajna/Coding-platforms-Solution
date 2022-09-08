/* Approach 1 */

class Solution
{
    public:
    //Function to sort a linked list of 0s, 1s and 2s.
    Node* segregate(Node *head) {
        int one = 0, two = 0, zero = 0;
        Node *temp = head;
        
        while(temp != NULL){
            if(temp->data == 0){
                zero++;
            }
            if(temp->data == 1){
                one++;
            }
            if(temp->data == 2){
                two++;
            }
            temp = temp->next;
        }
        
        temp = head;
        while(temp != NULL){
            if(zero != 0){
                temp->data = 0;
                zero--;
            }
            else if(one != 0){
                temp->data = 1;
                one--;
            }
            else if(two != 0){
                temp->data = 2;
                two--;
            }
            temp = temp->next;
        }
        return head;
        
    }
};



/* Approach 2 */
class Solution
{
    public:
    
    void insertAtTail(Node* &Tail, Node *temp){
        Tail->next = temp;
        Tail = temp;
    }
    
    //Function to sort a linked list of 0s, 1s and 2s.
    Node* segregate(Node *head) {
        Node* zeroHead = new Node(-1);
        Node* zeroTail = zeroHead;
        Node* oneHead = new Node(-1);
        Node* oneTail = oneHead;
        Node* twoHead = new Node(-1);
        Node* twoTail = twoHead;
        
        Node* temp = head;
        
        while(temp != NULL){
            if(temp->data == 0){
                insertAtTail(zeroTail, temp);
            }
            if(temp->data == 1){
                insertAtTail(oneTail, temp);
            }
            if(temp->data == 2){
                insertAtTail(twoTail, temp);
            }
            temp = temp->next;
        }
        
        if(oneHead->next != NULL){
            zeroTail->next = oneHead->next;
        }
        else {
            zeroTail->next = twoHead->next;
        }
        
        oneTail->next = twoHead->next;
        twoTail->next = NULL;
        
        head = zeroHead->next;
        
        delete zeroHead;
        delete oneHead;
        delete twoHead;
        
        return head;
    }
};
