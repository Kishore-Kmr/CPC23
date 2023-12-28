vector<int> find3Numbers(vector<int> arr, int N) {
        if(N<3)
            return {};
        int tempMini=arr[0], mini, mid=INT_MAX;
        for(int i=1;i<N;i++){
            if(arr[i]<=tempMini)
                tempMini=arr[i];
            else if(arr[i]<mid){
                mid=arr[i];
                mini=tempMini;
            }
            else if(arr[i]>mid)
                return {mini, mid, arr[i]};
        }
        return {};
}
