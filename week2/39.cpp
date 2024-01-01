class Solution {
    int f(int i, bool buy, vector<vector<vector<int>>>& dp, vector<int>& prices, int count){
        int n=prices.size();
        if(count==0||i==n)
            return 0;
        if(dp[i][buy][count]!=-1)
            return dp[i][buy][count];
        int result;
        if(buy)
            result=max(-prices[i]+f(i+1, !buy, dp, prices, count), f(i+1, buy, dp, prices, count));
        else
            result=max(prices[i]+f(i+1, !buy, dp, prices, count-1), f(i+1, buy, dp, prices, count));
        return dp[i][buy][count]=result;
  }
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        vector<vector<vector<int>>> dp(n, vector<vector<int>>(2, vector<int>(3, -1)));
        return f(0, true, dp, prices, 2);
    }
};
