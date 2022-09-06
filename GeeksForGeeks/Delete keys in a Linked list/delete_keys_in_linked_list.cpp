/* Link list Node 
struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};*/

/*You are required to complete below method*/

Node* deleteAllOccurances(Node *head,int x)
{
    if(head == NULL)
        return NULL;
    
    head->next = deleteAllOccurances(head->next, x);
    
    return(head->data == x)? head->next : head;
}
