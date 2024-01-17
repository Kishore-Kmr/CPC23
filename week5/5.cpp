int findFloor(vector<long long> v, long long n, long long x){      
        if(v[0]>x)
            return -1;
        int l=0, r=n-1, idx=-1;
        while(l<=r){
            int mid=l+(r-l)/2;
            if(v[mid]==x)
                return mid;
            else if(v[mid]<x){
                idx=mid;
                l=mid+1;
            }
            else
                r=mid-1;
        }
        return idx;
}
    
    int findCeil(vector<long long> v, long long n, long long x){       
        if(v[n-1]<x)
            return -1;
        int l=0, r=n-1, idx=-1;
        while(l<=r){
            int mid=l+(r-l)/2;
            if(v[mid]==x)
                return mid;
            else if(v[mid]>x){
                idx=mid;
                r=mid-1;
            }
            else
                l=mid+1;
        }
        return idx;       
    }
