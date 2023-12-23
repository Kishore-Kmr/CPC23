vector<int> repeatedNumber(vector<int> &A) {
    vector<int> nums(A.begin(), A.end()), result;
    int n=A.size();
    for(int x:nums){
        if(nums[abs(x)-1]<0) 
            result.push_back(abs(x));
        else
            nums[abs(x)-1]*=-1;
    }
    for(int i=0;i<n;i++){
        if(nums[i]>0){
            result.push_back(i+1);
            return result;
        }
    }
}
