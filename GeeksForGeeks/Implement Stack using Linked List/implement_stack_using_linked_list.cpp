//Function to push an integer into the stack.
void MyStack ::push(int x) 
{
    StackNode*temp=new StackNode(x);
    
    if(top==NULL){
        top=temp;
        return;
    }
    
    temp->next=top;
    top=temp;
     return ;
}

//Function to remove an item from top of the stack.
int MyStack ::pop() 
{
    if(top == NULL){
        return -1;
    }
    
    int k = top->data;
    StackNode *temp = top;
    top = top->next;
    delete temp;
    return k;
}
