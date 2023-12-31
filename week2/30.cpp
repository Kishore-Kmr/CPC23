int maxAscendingSum(vector<int>& nums) {
        int currSum=0, n=nums.size(), result=0;
        for(int i=0;i<n;i++){
            if(i==0||nums[i]>nums[i-1])
                currSum+=nums[i];
            else
                currSum=nums[i];
            result=max(result, currSum);
        }
        return result;
}
