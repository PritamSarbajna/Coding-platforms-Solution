/* Structure of a node in Queue
struct QueueNode
{
    int data;
    QueueNode *next;
    QueueNode(int a)
    {
        data = a;
        next = NULL;
    }
};

And structure of MyQueue
struct MyQueue {
    QueueNode *front;
    QueueNode *rear;
    void push(int);
    int pop();
    MyQueue() {front = rear = NULL;}
}; */

//Function to push an element into the queue.
void MyQueue:: push(int x)
{
   
   QueueNode *newNode = new QueueNode(x);
   newNode->next = NULL;
   
   if(rear == NULL || front == NULL){
       rear = newNode;
       front = newNode;
       return;
   }
   
   rear->next = newNode;
   rear = newNode;
}

//Function to pop front element from the queue.
int MyQueue :: pop()
{
    if(front == NULL){
        return -1;
    }
    
   if(front == rear){
        rear = NULL;
    }
    
    QueueNode *temp = front;
    int ele = temp->data;
    front = front->next;
    free(temp);
    return ele;
    
}
