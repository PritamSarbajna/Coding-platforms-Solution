/* struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

//Function to find the data of nth node from the end of a linked list.
int getNthFromLast(Node *head, int n)
{
    // Your code here
    Node *temp = head;
    
    int len = 0;
    while(temp!=NULL){
        len++;
        temp = temp->next;
    }
    
    if(len<n){
        return -1;
    }
    else{
        temp = head;
        int pos = len - n;
            
        for(int i=0; i<pos; i++){
            temp = temp->next;
        }
            
            return temp->data;
    }
}
