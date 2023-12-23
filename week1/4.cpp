vector<int> findRepeated(vector<int>& nums){
    unordered_set<int> st;
    vector<int> result;
    for(int x:nums){
        if(st.find(x)!=st.end())
            result.push_back(x);
        st.insert(x);
    }
    return result;
}
