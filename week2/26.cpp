long long maxProduct(vector<int> arr, int n) {
	    long long result=INT_MIN, maxProd=1, minProd=1;
	    for(long long x:arr){
	        if(x>0){
	            maxProd=max(maxProd*x, x);
	            minProd=min(minProd*x, x);
	        }
	        else{
	            long long temp=max(minProd*x, x);
	            minProd=min(maxProd*x, x);
	            maxProd=temp;
	        }
	        result=max(result, maxProd);
	    }
	    return result;
}
