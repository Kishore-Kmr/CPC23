int minRow(int N, int M, vector<vector<int>> A) {
        int mini=INT_MAX, row;
        for(int i=0;i<N;i++){
            int count=0;
            for(int j=0;j<M;j++)
                count+=A[i][j];
            if(count<mini){
                if(count==0)
                    return i+1;
                mini=count;
                row=i+1;
            }
        }
        return row;
}
