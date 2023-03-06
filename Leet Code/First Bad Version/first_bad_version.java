/* The isBadVersion API is defined in the parent class VersionControl.
      boolean isBadVersion(int version); */

public class Solution extends VersionControl {
    public int firstBadVersion(int n) {
        int low = 0, high = n;

        while(low<=high){
            int mid = (high+low)/2;

            if(isBadVersion(mid) && !(isBadVersion(mid-1)))
                return mid;
            else if(isBadVersion(mid)==false ) 
                low = mid+1;
            else 
                high= mid;
        }
        return -1;
    }
}
