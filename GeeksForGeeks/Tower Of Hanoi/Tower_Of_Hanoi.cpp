class Solution{
    public:
    // You need to complete this function
    // avoid space at the starting of the string in "move disk....."
    long long toh(int N, int from, int to, int aux) {
        if(N == 0)
            return 0;
            
        long long l,r;
        l = toh(N-1, from , aux, to);
        cout<<"move disk "<< N << " from rod "<< from <<" to rod "<< to << endl;
        r = toh(N-1, aux, to, from);
        return l+r+1;
    }

};
