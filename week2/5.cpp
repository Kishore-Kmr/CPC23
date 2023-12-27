int Solution::threeSumClosest(vector<int> &A, int B) {
    sort(A.begin(), A.end());
    int n=A.size(), result=0, minDiff=INT_MAX;
    for(int i=0;i<=n-3;i++){
        int l=i+1, r=n-1;
        while(l<r){
            if(abs(A[i]+A[l]+A[r]-B)<minDiff){
                minDiff=abs(A[i]+A[l]+A[r]-B);
                result=A[i]+A[l]+A[r];
                if(minDiff==0)
                    return result;
            }
            if(A[i]+A[l]+A[r]<B)    l++;
            else                    r++;
            
        }
    }
    return result;
}
