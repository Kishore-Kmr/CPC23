bool compare(pair<int, int> &p1, pair<int, int> &p2){
    if(p1.second==p2.second)
        return p1.first<=p2.first;
    return p1.second>p2.second;
}

int main() {
	int t; 
	cin>>t;
	for(;t>0;t--){
	    int n;
	    cin>>n;
	    unordered_map<int, int> mp;
	    vector<pair<int, int>> arr;
	    for(int i=0;i<n;i++){
	        int temp;
	        cin>>temp;
	        mp[temp]++;
	    }
	    for(auto it:mp)
	        arr.push_back(it);
	    sort(arr.begin(), arr.end(), compare);
	    for(auto it:arr){
	        for(int i=0;i<it.second;i++)
	            cout<<it.first<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}
