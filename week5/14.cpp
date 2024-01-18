int findMaximum(int arr[], int n) {
	    if(arr[n-1]>arr[n-2])
	        return arr[n-1];
	    if(arr[0]>arr[1])
	        return arr[0];
	    int l=1, r=n-1;
	    while(l<=r){
	        int mid=l+(r-l)/2;
	        if(arr[mid]>arr[mid-1]&&arr[mid]>arr[mid+1])
	            return arr[mid];
	        else if(arr[mid]>arr[mid-1])
	            l=mid+1;
	        else
	            r=mid-1;
	    }
}
