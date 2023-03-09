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
		    Map<Integer, Integer> map = new HashMap<Integer, Integer>();
		    int count = 0;
		    
		    for(int i=0; i<n; i++){
		        int e = sc.nextInt();
		        if (map.containsKey(e)) {
                    map.put(e, map.get(e)+1);
                }
                else{
                    map.put(e,1);
                }
		        
		        if(map.get(e) > count){
		            count = map.get(e);
		        }
		        
		    }
		    
		    System.out.println(n-count);
		}
	}
}
