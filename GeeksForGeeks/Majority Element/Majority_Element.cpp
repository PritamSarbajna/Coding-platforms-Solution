class Solution{
  public:
     // Function to find majority element in the array
    // a: input array
    // size: size of input array
    int majorityElement(int num[], int size)
    {
        map<int,int> mp;
        for (int i=0;i<size;i++){
            if (mp.find(num[i]) == mp.end()){
                mp[num[i]] = 1;
            }else{
                mp[num[i]] += 1;
            }
            if (mp[num[i]] > size/2){
                return num[i];
            }
        }
        return -1;
        
    }
};
