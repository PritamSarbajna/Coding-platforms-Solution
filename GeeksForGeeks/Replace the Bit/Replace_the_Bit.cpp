class Solution
{
  public:
    int replaceBit (int n, int k){
        int position = (log2(n) + 1);
        return (n & ~(1<<(position-k)));
    }
};
