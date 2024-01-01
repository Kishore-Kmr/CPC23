class Solution {
    int  atMost(vector<int>& nums, int k){
        int n=nums.size(), result=0, j=0;
        unordered_map<int, int> mp;
        for(int i=0;i<n;i++){
            if(mp.count(nums[i])==0||mp[nums[i]]==0)
                k--;
            mp[nums[i]]++;
            while(k<0){
                mp[nums[j]]--;
                if(mp[nums[j]]==0)
                    k++;
                j++;
            }
            result+=(i-j+1);
        }
        return result;
    }
public:
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return atMost(nums, k)-atMost(nums, k-1);
    }
};
