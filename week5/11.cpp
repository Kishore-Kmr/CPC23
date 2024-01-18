int count(int arr[], int n, int x) {
	    int l=0, r=n-1, leftMost=-1, rightMost=-1;
	    while(l<=r){
	        int mid=l+(r-l)/2;
	        if(arr[mid]<x)
	            l=mid+1;
	        else{
	            if(arr[mid]==x)
	                leftMost=mid;
	            r=mid-1;
	        }
	    }
	    if(leftMost==-1)
	        return 0;
	    l=0, r=n-1;
	    while(l<=r){
	        int mid=l+(r-l)/2;
	        if(arr[mid]>x)
	            r=mid-1;
	        else{
	            if(arr[mid]==x)
	                rightMost=mid;
	            l=mid+1;
	        }
	    }
	    return rightMost-leftMost+1;
}
