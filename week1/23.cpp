int reverse(int num){
        long long rev=0;
        while(num!=0){
            rev=rev*10+num%10;
            num/=10;
        }
        return rev;
}
bool isPalindrome(int x) {
        if(x<0) return false;
        return x==reverse(x);
}
