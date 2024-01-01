class Solution {
    int f(int i, bool buy, int k, vector<int>& prices, vector<vector<vector<int>>>& dp){
        int n=prices.size();
        if(i==n||k==0)
            return 0;
        if(dp[i][buy][k]!=-1)
            return dp[i][buy][k];
        int result;
        if(buy)
            result=max(-prices[i]+f(i+1, !buy, k, prices, dp), f(i+1, buy, k, prices, dp));
        else
            result=max(prices[i]+f(i+1, !buy, k-1, prices, dp), f(i+1, buy, k, prices, dp));
        return dp[i][buy][k]=result;
    }
public:
    int maxProfit(int k, vector<int>& prices) {
        int n=prices.size();
        vector<vector<vector<int>>> dp(n, vector<vector<int>>(2, vector<int>(k+1, -1)));
        return f(0, true, k, prices, dp);

    }
};
