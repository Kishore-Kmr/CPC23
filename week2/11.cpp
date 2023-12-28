int equilibriumPoint(long long a[], int n) {
    
        long long sumL=0, sumR=0;
        for(int i=n-1;i>0;i--)
            sumR+=a[i];
        for(int i=0;i<n;i++){
            if(sumL==sumR)
                return i+1;
            sumL+=a[i];
            if(i!=n-1)
                sumR-=a[i+1];
        }
        return -1;
}
