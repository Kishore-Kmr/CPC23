vector<int> singleNumber(vector<int> nums) 
{
        int XOR=0, rightMostBit=0, a=0, b=0;
        for(int x:nums)
            XOR^=x;
        rightMostBit=XOR&(~(XOR-1));
        for(int x:nums){
            if(x&rightMostBit)
                b^=x;
            else
                a^=x;
        }
        if(b<a)
            swap(a,b);
        return {a,b};
}
