void booleanMatrix(vector<vector<int> > &matrix)
    {
        int m=matrix.size(), n=matrix[0].size();
        bool row=false, col=false;
        for(int i=0;i<n;i++){
            if(matrix[0][i]){
                row=true;
                break;
            }
        }
        for(int i=0;i<m;i++){
            if(matrix[i][0]){
                col=true;
                break;
            }
        }
        for(int i=1;i<m;i++){
            for(int j=1;j<n;j++){
                if(matrix[i][j]){
                    matrix[i][0]=1;
                    matrix[0][j]=1;
                }
            }
        }
        for(int i=1;i<m;i++){
            for(int j=1;j<n;j++){
                if(matrix[0][j]||matrix[i][0])
                    matrix[i][j]=1;
            }
        }
        if(row){
            for(int i=0;i<n;i++)
                matrix[0][i]=1;
        }
        if(col){
            for(int i=0;i<m;i++)
                matrix[i][0]=1;
        }
    }
