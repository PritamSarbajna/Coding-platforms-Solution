class Solution{
    public:
    /* Should return data of middle node. If linked list is empty, then  -1*/
    int getMiddle(Node *head){
        struct Node* temp = head;
        int len = 0;
        while(temp != NULL){
            len++;
            temp = temp->next;
        }
        
        len = (len/2)+1;
        
        struct Node* tempHead = head;
        for(int i=1; i<len; i++){
            tempHead = tempHead->next;
        }
        return tempHead->data;
    }
};
