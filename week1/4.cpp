int missingNumber(vector<int>& array, int n) {
        int x=0;
        for(int i=1;i<=n;i++){
            x^=i;
            if(i!=n)
                x^=array[i-1];
        }
        return x;
}
