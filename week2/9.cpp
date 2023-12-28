int closestToZero(int arr[], int n)
{
            sort(arr, arr+n);
            int sum, diffToZero=INT_MAX, l=0, r=n-1;
            while(l<r){
                int currSum=arr[l]+arr[r];
                if(currSum==0)
                    return 0;
                else if(abs(currSum)<diffToZero){
                    diffToZero=abs(currSum);
                    sum=currSum;
                }
                else if(abs(currSum)==diffToZero)
                    sum=max(sum, currSum);
                if(currSum>0)   r--;
                else            l++;
            }
            return sum;
            
}
