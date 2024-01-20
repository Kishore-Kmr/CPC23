class TopVotedCandidate {
    vector<int> topVoted, ts;
public:
    TopVotedCandidate(vector<int>& persons, vector<int>& times) {
        int n=persons.size(), maxi=INT_MIN, maxVoted=-1;
        ts=times;
        unordered_map<int ,int> mp;
        for(int x:persons){
            mp[x]++;
            if(mp[x]>=maxi){
                maxi=mp[x];
                maxVoted=x;
            }
            topVoted.push_back(maxVoted);
        }
    }
    
    int q(int t) {
        int idx=upper_bound(ts.begin(), ts.end(), t)-ts.begin();
        if(idx==0)
            return 0;
        return topVoted[idx-1];
    }
};
