bool find3Numbers(int A[], int n, int X)
{
        vector<int> nums;
        for(int i=0;i<n;i++)
            nums.push_back(A[i]);
        sort(nums.begin(), nums.end());
        for(int i=0;i<n-2&&nums[i]<X;i++){
            int reqSum=X-nums[i], l=i+1, r=n-1;
            while(l<r){
                if(nums[l]+nums[r]==reqSum)
                    return true;
                else if(nums[l]+nums[r]>reqSum)
                    r--;
                else 
                    l++;
            }
        }
        return false;
}
