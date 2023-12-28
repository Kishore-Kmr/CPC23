bool subArrayExists(int arr[], int n){
        int prefSum=0;
        unordered_set<int> st;
        for(int i=0;i<n;i++){
            prefSum+=arr[i];
            if(prefSum==0||(st.find(prefSum)!=st.end()))
                return true;
            st.insert(prefSum);
        }
        return false;
}
