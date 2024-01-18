vector<int> printUnsorted(int arr[], int n) {
	    int left=-1, right=-1;
	    for(int i=0, j=n-1;i<n-1;i++, j--){
	        if(left==-1&&arr[i]>arr[i+1])
	            left=i;
	        if(right==-1&&arr[j-1]>arr[j])
	            right=j;
	    }
	    if(left==-1)
	        return {0, 0};
	    int maxi=INT_MIN, mini=INT_MAX;
	    for(int i=left;i<=right;i++){
	        maxi=max(maxi, arr[i]);
	        mini=min(mini, arr[i]);
	    }
	    left=-1, right=-1;
	    for(int i=0, j=n-1;i<n;i++, j--){
	        if(left==-1&&arr[i]>mini)
	            left=i;
	        if(right==-1&&arr[j]<maxi)
	            right=j;
	    }
	    return {left, right};
}
