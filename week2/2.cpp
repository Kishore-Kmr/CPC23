bool hasArrayTwoCandidates(int arr[], int n, int x) {
	    unordered_set<int> st;
	    for(int i=0;i<n;i++){
	        if(st.find(x-arr[i])!=st.end())
	            return true;
            st.insert(arr[i]);
	    }
	    return false;
}
