int titleToNumber(string columnTitle) {
        int n=columnTitle.size(), result=0;
        for(long long i=n-1, place=1;i>=0;i--, place*=26){
            int curr=columnTitle[i]-'A'+1;
            result+=(place*curr);
        }
        return result;
}
