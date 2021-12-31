// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        long int first = 1;
        long int last = n;
        long int half;
        long int bad_version = n;
        
        while(first <= last){
            half =  (first + last) / 2;
            if(isBadVersion(half)){
                bad_version = half;
                last = half-1;
            }
            else{
                first = half+1;
            }
        }
        return bad_version;
        
        return 0;
    }
};
