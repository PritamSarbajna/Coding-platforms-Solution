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
