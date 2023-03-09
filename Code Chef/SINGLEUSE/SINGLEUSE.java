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
		    int h = sc.nextInt();
		    int x = sc.nextInt();
		    int y = sc.nextInt();
		    int count = 0;
		    
		    h -= y;
            count++;
        
            while(h > 0){
                h -= x;
                count++;
            }
            
            System.out.print(count + "\n");
		}
	}
}
