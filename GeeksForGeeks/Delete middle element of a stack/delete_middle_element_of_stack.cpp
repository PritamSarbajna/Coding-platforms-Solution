//User function template for C++

class Solution
{
    public:
    //Function to delete middle element of a stack.
    void deleteMid(stack<int>&s, int sizeOfStack)
    {
        stack<int> stack;
        int cnt = 0;
        while(!s.empty()){
            stack.push(s.top());
            cnt++;
            s.pop();
            
            if(cnt == ceil(sizeOfStack/2))
                s.pop();
        }
        
        while(!stack.empty()){
            s.push(stack.top());
            stack.pop();
        }
    }
};
