
    int atMost(vector<int>& nums, int k){
        int result=0, j=0, count=0, n=nums.size();
        for(int i=0;i<n;i++){
            count+=(nums[i]%2);
            while(count>k){
                count-=(nums[j]%2);
                j++;
            }
            result+=(i-j+1);
        }
        return result;
    }

    int numberOfSubarrays(vector<int>& nums, int k) {
        return atMost(nums, k)-atMost(nums, k-1);
    }
