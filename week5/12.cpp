vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size(), l=0, r=n-1, leftMost=-1, rightMost=-1;
	    while(l<=r){
	        int mid=l+(r-l)/2;
	        if(nums[mid]<target)
	            l=mid+1;
	        else{
	            if(nums[mid]==target)
	                leftMost=mid;
	            r=mid-1;
	        }
	    }
	    l=0, r=n-1;
	    while(l<=r){
	        int mid=l+(r-l)/2;
	        if(nums[mid]>target)
	            r=mid-1;
	        else{
	            if(nums[mid]==target)
	                rightMost=mid;
	            l=mid+1;
	        }
	    }
	    return {leftMost, rightMost};
}
