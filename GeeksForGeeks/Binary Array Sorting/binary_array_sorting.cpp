// // { Driver Code Starts
// //Initial Template for C

// #include <stdio.h>

//  // } Driver Code Ends
// //User function Template for C

// // A[]: input array
// // N: input array
// //Function to sort the binary array.
void binSort(int A[], int N){
   int left = 0, right = N-1;
   while(left<right){
       if(A[left]==1){
           int temp=A[left];
           A[left]=A[right];
           A[right]=temp;
           right--;
       }
       else{
           left++;
       }
   }
}

// // { Driver Code Starts.

// int main() {
// 	int T;
// 	scanf("%d", &T);
// 	// Input the number of testcases
// 	while(T--)
// 	{
// 	    int N;
// 	    scanf("%d", &N); //Input size of array N
// 	    int A[N]; 
	    
// 	    for(int i = 0; i  < N; i++)
// 	      scanf("%d", &A[i]);
	      
// 	    binSort(A,N);
	    
// 	    for(int i = 0; i  < N; i++)
// 	        printf("%d ", A[i]);
	      
// 	    printf("\n");
// 	}
// 	return 0;
// }  // } Driver Code Ends
