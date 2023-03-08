import java.util.*;
public class Ideal_Point {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        
        while(t-->0){
            int n = sc.nextInt();
            int k = sc.nextInt();
            int left = 0, right = 0, center = 0; 
            
            while(n-->0){
                int l = sc.nextInt();
                int u = sc.nextInt();
 
                if(l == u && l == k){
                    center++;
                }
                else if(u == k){
                    right++;
                }
                else if(l == k){
                    left++;
                }
            }
            
            if(center > 0){
                System.out.println("YES");
            }
            else if(left > 0 && right > 0){
                System.out.println("YES");
            }
            else{
                System.out.println("NO");
            }
        }
    }
}
