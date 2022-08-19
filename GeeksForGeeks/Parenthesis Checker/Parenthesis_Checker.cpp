class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        unordered_map<char, int> brackets = {{'(', -1}, {'{', -2}, {'[', -3},{')', 1}, {'}', 2}, {']', 3}};
        stack<char> stack;
        
        for(bracket:x){
            
            if(brackets[bracket] < 0){
                stack.push(bracket);
            }
            else{
                if(stack.empty()){
                    return false;
                }
                else if(brackets[stack.top()] + brackets[bracket] != 0){
                    return false;
                }
                else{
                    stack.pop();
                }
            }
        }
        
        if(!stack.empty())
            return false;

        return true;
    }

};
