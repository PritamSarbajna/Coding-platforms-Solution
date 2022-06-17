class Solution{
  public:
    int MissingNumber(vector<int>& array, int n) {
       int sum = 0;
       int actual_sum = (n*(n+1))/2;
      for(int i=0; i<array.size(); i++) {
          sum = sum + array[i];
      }
      return (actual_sum - sum);
   }
};
