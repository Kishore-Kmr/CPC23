void shuffle(vector<int>& nums){
    int n=nums.size();
    srand(time(NULL);
    for(int i=n-1;i>0;i--){
        int pos=rand()%(i+1);
        swap(nums[i], nums[pos]);
    }
}
