vector<int> subarraySum(vector<int>arr, int n, long long s)
{
        int l=0;
        long long currSum=0;
        for(int i=0;i<n;i++){
            currSum+=arr[i];
            while(l<i&&currSum>s){
                currSum-=arr[l];
                l++;
            }
            if(currSum==s)
                return {l+1,i+1};
        }
        return {-1};
}
