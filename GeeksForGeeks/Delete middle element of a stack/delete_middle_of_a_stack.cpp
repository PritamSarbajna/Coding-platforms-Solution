class Solution
{
    public:
    void deleteStackMid(stack<int>&s, int size, int count){
        if(count == size/2){
            s.pop();
            return;
        }
        
        int num = s.top();
        s.pop();
        
        deleteStackMid(s, size, count+1);
        
        s.push(num);
    }
    
    //Function to delete middle element of a stack.
    void deleteMid(stack<int>&s, int sizeOfStack)
    {
        int count = 0;
        deleteStackMid(s, sizeOfStack, count);
    }
};
