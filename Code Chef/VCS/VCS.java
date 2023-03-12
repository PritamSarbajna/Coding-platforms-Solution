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
		    Map<Integer, Integer> map = new HashMap<Integer, Integer>();
		    int n = sc.nextInt();
		    int m = sc.nextInt();
		    int k = sc.nextInt();
		    
		    int[] arr1 = new int[m];
		    for(int i=0; i<m; i++){
		        arr1[i] = sc.nextInt();
		        
		        if (map.containsKey(arr1[i])) {
                    map.put(arr1[i], map.get(arr1[i])+1);
                }
                else{
                    map.put(arr1[i],1);
                }
		    }
		    
		    int[] arr2 = new int[k];
		    for(int i=0; i<k; i++){
		        arr2[i] = sc.nextInt();
		        
		        if (map.containsKey(arr2[i])) {
                    map.put(arr2[i], map.get(arr2[i])+1);
                }
                else{
                    map.put(arr2[i],1);
                }
		    }
		    
		    int ti = 0, utui = 0;
		    
		    for(int i=1; i<=n; i++){
		        if(map.get(i) == null){
		            utui++;
		        }
		        else if(map.get(i)%2 == 0){
		            ti++;
		        }
		    }
		    System.out.println(ti + " " + utui);
		}
	}
}
