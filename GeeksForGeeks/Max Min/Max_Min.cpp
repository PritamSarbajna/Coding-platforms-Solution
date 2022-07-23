class Solution
{
   public:
    int findSum(int A[], int N)
    {
    	int minimum = A[0];
    	int maximum = A[0];
    	
    	for(int i=0; i<N; i++){
    	    if(A[i] > maximum){
    	        maximum = A[i];
    	    }
    	    if(A[i] < minimum){
    	        minimum = A[i];
    	    }
    	}
    	
    	return minimum+maximum;
    }

};
