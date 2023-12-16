vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
	    sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        int i=0, j=0;
        vector<int> result;
        unordered_set<int> st;
        while(i<nums1.size()&&j<nums2.size()){
            if(nums1[i]<nums2[j])       i++;
            else if(nums1[i]>nums2[j])  j++;
            else{
                st.insert(nums1[i]);
                i++, j++;
            }
        }
        for(int x:st)
            result.push_back(x);
        return result;
}


vector<int> union(vector<int>& nums1, vector<int>& nums2){
	unordered_set<int> st;
	vector<int> result;
	for(int x:nums1)
		st.insert(x);
	for(int x:nums2)
		st.insert(x);
	for(int x:st)
		result.push_back(x);
	return result;
}