int maxLen(int arr[], int N)
{
        int currSum=0, result=0;
        unordered_map<int, int> mp;
        for(int i=0;i<N;i++){
            if(arr[i])
                currSum++;
            else 
                currSum--;
            if(currSum==0)
                result=max(result, i+1);
            else if(mp.find(currSum)!=mp.end())
                result=max(result, i-mp[currSum]);
            if(mp.find(currSum)==mp.end())
                mp[currSum]=i;
        }
        return result;
}
