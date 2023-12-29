vector<long long int> productExceptSelf(vector<long long int>& nums, int n) {
        vector<long long> rightProd(n, nums[n-1]), result(n, 1);
        for(int i=n-2;i>=0;i--)
            rightProd[i]=rightProd[i+1]*nums[i];
        long long leftProd=1;
        for(int i=0;i<n;i++){
            if(i==n-1)
                result[i]=leftProd;
            else
                result[i]=leftProd*rightProd[i+1];
            leftProd*=nums[i];
        }
        return result;
}
