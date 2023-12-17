#define ll long long
vector<long long int> twoOddNum(long long int Arr[], long long int N)  
    {
        ll XOR=0, rightMostBit=0, a=0, b=0;
        for(ll i=0;i<N;i++)
            XOR^=Arr[i];
        rightMostBit=XOR&(~(XOR-1));
        for(ll i=0;i<N;i++){
            if(Arr[i]&rightMostBit)
                b^=Arr[i];
            else
                a^=Arr[i];
        }
        if(b<a)
            swap(a,b);
        return {b,a};
    }
