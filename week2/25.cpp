int maxSubArray(vector<int>& nums) {
        int maxi=INT_MIN, prev=0, n=nums.size();
        for(int i=0;i<n;i++){
            if(prev>0)
                prev+=nums[i];
            else
                prev=nums[i];
            maxi=max(maxi, prev);
        }
        return maxi;
}
