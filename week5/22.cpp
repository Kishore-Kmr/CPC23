vector<int> findRightInterval(vector<vector<int>>& intervals) {
        int n=intervals.size();
        vector<int> result(n), starts;
        unordered_map<int, int> mp;
        for(int i=0;i<n;i++){
            starts.push_back(intervals[i][0]);
            mp[intervals[i][0]]=i;
        }
        sort(starts.begin(), starts.end());
        for(int i=0;i<n;i++){
            auto it=lower_bound(starts.begin(), starts.end(), intervals[i][1]);
            if(it==starts.end())
                result[i]=-1;
            else
                result[i]=mp[*it];
        }
        return result;
}
