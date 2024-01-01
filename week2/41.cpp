vector<int> leaders(int a[], int n){
        vector<int> result;
        int maxi=INT_MIN;
        for(int i=n-1;i>=0;i--){
            if(a[i]>=maxi){
                maxi=a[i];
                result.push_back(a[i]);
            }
        }
        reverse(result.begin(), result.end());
        return result; 
}
