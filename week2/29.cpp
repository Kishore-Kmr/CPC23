int rob(vector<int>& nums) {
        int n=nums.size(), next=0, nextToNext=0;
        for(int i=n-1;i>=0;i--){
            int curr=max(nums[i]+nextToNext, next);
            nextToNext=next;
            next=curr;
        }
        return next;
}
