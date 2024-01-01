int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int n=nums.size(), result=0, prod=1, j=0;
        for(int i=0;i<n;i++){
            prod*=nums[i];
            while(i>=j&&prod>=k){
                prod/=nums[j];
                j++;
            }
            result+=(i-j+1);
        }
        return result;
}
