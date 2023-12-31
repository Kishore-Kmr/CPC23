int maxProfit(vector<int>& prices) {
        int smallest=prices[0], n=prices.size(), result=0;
        for(int i=1;i<n;i++){
            result=max(result, prices[i]-smallest);
            smallest=min(smallest, prices[i]);
        }
        return result;
}
