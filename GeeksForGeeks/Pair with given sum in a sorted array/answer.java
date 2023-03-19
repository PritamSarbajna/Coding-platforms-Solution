class Solution{
    
  
    int Countpair(int a[], int n, int sum)
    {
        int i = 0, j = n-1, count = 0;

        while(i<j){

            // If the two element's sum is equal to sum return its index
            if(a[i] + a[j] == sum){
                count++; i++; j--;
            }
            // If the two element's sum is greater than sum 
            // decrease the second pointer
            else if(a[i] + a[j] > sum){
                j--;
            }
            // If the two element's sum is less than sum 
            // increase the first pointer
            else{
                i++;
            }
        }
        return (count == 0)? -1:count;
    }
  
    
}
