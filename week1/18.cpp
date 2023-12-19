void sort012(int a[], int n)
{
        int i=0, k=n-1;
        for(int j=0;j<=k;j++){
            if(a[j]==0){
                swap(a[i], a[j]);
                i++;
            }
            if(a[j]==2){
                swap(a[j], a[k]);
                k--;
                j--;
            }
        }
}
