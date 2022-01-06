class Solution {
public:
    int majorityElement(vector<int> &num) {
        map<int,int> mp;
        for (int i=0;i<num.size();i++){
            if (mp.find(num[i]) == mp.end()){
                mp[num[i]] = 1;
            }else{
                mp[num[i]] += 1;
            }
            if (mp[num[i]] > num.size()/2){
                return num[i];
            }
        }
        return 0;
    }
};
