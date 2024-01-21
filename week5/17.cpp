double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n1=nums1.size(), n2=nums2.size(), half=(n1+n2+1)/2;
        if(n1>n2){
            swap(n1, n2);
            swap(nums1, nums2);
        }   
        int l=0, r=n1;
        while(l<=r){
            int mid1=l+(r-l)/2, mid2=half-mid1;
            int l1=INT_MIN, l2=INT_MIN, r1=INT_MAX, r2=INT_MAX;
            if(mid1<n1)
                r1=nums1[mid1];
            if(mid1>0)
                l1=nums1[mid1-1];
            if(mid2<n2)
                r2=nums2[mid2];
            if(mid2>0)
                l2=nums2[mid2-1];
            if(l1<=r2){
                if(l2<=r1){
                    if(tot%2)
                        return max(l1, l2);
                    else
                        return double(max(l1,l2)+min(r1, r2))/2;
                }
                else
                l=mid1+1;
            }
            else
                r=mid1-1;
        }
        return -1;
}
