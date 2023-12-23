int findDuplicate(vector<int>& nums) {
        int fast=nums[nums[0]], slow1=nums[0], slow2=0;
        while(fast!=slow1){
            fast=nums[nums[fast]];
            slow1=nums[slow1];
        }
        while(slow1!=slow2){
            slow1=nums[slow1];
            slow2=nums[slow2];
        }
        return slow1;
}
