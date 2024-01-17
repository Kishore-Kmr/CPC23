int hIndex(vector<int>& citations) {
        int result=0, l=0, n=citations.size(), r=n-1;
        while(l<=r){
            int mid=l+(r-l)/2;
            result=max(result, min(citations[mid], n-mid));
            if(citations[mid]==n-mid)
                return citations[mid];
            else if(citations[mid]<n-mid)
                l=mid+1;
            else
                r=mid-1;;
        }
        return result;
}
