//return the address of the string
char* reverse(char *S, int len)
{
    stack<char> stack;
    for(int i=0;i<len;i++)
        stack.push(S[i]);

    int i=0;
    while(!stack.empty()){
        S[i++]=stack.top();
        stack.pop();
    }
    return S;
}
