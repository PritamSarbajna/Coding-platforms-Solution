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
		    String s = sc.next();
		    
		    boolean flag = false;
		    int count = 0;
		    
		    for(int i=0; i<n; i++){
		        if(s.charAt(i) != 'a' && s.charAt(i) != 'e' && s.charAt(i) != 'i' && s.charAt(i) != 'o' &&s.charAt(i) != 'u'){
		            count++;
		            
		            if(count == 4){
		                flag = true;
		                break;
		            }
		        }
		        else{
		            count = 0;
		        }
		        
		    }
		    
		    System.out.println((flag)? "NO":"YES");
		}
	}
}
