vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> result;
        int n=nums.size();
        for(int i=0;i<n-3;i++){
            if(i>0&&nums[i]==nums[i-1])
                continue;
            for(int j=i+1;j<n-2;j++){
                if(j>i+1&&nums[j]==nums[j-1])
                    continue;
                int l=j+1, r=n-1;
                while(l<r){
                    int currSum=nums[i]+nums[j]+nums[l]+nums[r];
                    if(currSum==target){
                        result.push_back({nums[i], nums[j], nums[l], nums[r]});
                        while(l<r&&nums[l]==nums[l+1])    l++;
                        while(l<r&&nums[r-1]==nums[r])    r--;
                        l++, r--;
                    }
                    if(currSum<target)  l++;
                    else                r--;
                }
            }
        }
        return result;
}
