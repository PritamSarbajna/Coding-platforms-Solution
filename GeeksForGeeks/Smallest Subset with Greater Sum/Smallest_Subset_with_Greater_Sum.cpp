class Solution{
    public:
    int minSubset(vector<int> &Arr,int N){
        long long totalSum = 0;
        for(int i=0; i<N; i++){
            totalSum += Arr[i];
        }
        sort(Arr.begin(),Arr.end(), greater<int>());
        long long currSum = 0;
        int count = 0;
        for(int i=0; i<N; i++){
            currSum += Arr[i];
            count++;
            if(currSum > totalSum-currSum){
                return count;
            }
        }
    }
};
