vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>> result;
        sort(nums.begin(), nums.end());
        for(int i=0;i<n-2&&nums[i]<=0;i++){
            if(i>0&&nums[i]==nums[i-1])
                continue;
            int reqSum=-nums[i], l=i+1, r=n-1;
            while(l<r){
                if(nums[l]+nums[r]==reqSum){
                    result.push_back({nums[i], nums[l], nums[r]});
                    while(l<n-1&&nums[l]==nums[l+1])
                        l++;
                    while(r>i&&nums[r]==nums[r-1])
                        r--;
                    l++, r--;    
                }
                else if(nums[l]+nums[r]>reqSum)
                    r--;
                else 
                    l++;
            }
        }
        return result;
}
