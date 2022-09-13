class Solution
{
    private:
    static bool cmp(pair<int,int> a, pair<int,int> b){
        return a.second < b.second;
    }
    public:
    //Function to find the maximum number of meetings that can
    //be performed in a meeting room.
    int maxMeetings(int start[], int end[], int n)
    {
        vector<pair<int,int>> ansPair;
        
        for(int i=0; i<n; i++){
            pair<int,int> p = make_pair(start[i], end[i]);
            ansPair.push_back(p);
        }
        
        sort(ansPair.begin(), ansPair.end(), cmp);
        
        int count = 1;
        int ansEnd = ansPair[0].second;
        
        for(int i=1; i<n; i++){
            if(ansPair[i].first > ansEnd){
                count++;
                ansEnd = ansPair[i].second;
            }
        }
        return count;
    }
};
