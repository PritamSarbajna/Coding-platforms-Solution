/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		while(t-->0){
		    int n = sc.nextInt();
		    int count = 0;
		    
		    int[] arr1 = new int[n];
		    for(int i=0; i<n; i++){
		        arr1[i] = sc.nextInt();
		    }
		    
		    int[] arr2 = new int[n];
		    for(int i=0; i<n; i++){
		        arr2[i] = sc.nextInt();
		        
		        if(arr1[i]*2 >= arr2[i] && arr2[i]*2 >= arr1[i])
		            count++;
		    }
		    
		    System.out.println(count);
		}
	}
}
