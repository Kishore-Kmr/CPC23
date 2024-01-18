int peakIndexInMountainArray(vector<int>& arr) {
        int n=arr.size(), l=1, r=n-2;
        while(l<=r){
            int mid=l+(r-l)/2;
            if(arr[mid]>arr[mid-1]){
                if(arr[mid]>arr[mid+1])
                    return mid;
                l=mid+1;
            }
            else
                r=mid-1;
        }
        return -1;
}
