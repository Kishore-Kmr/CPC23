void transform(vector<vector<int>>& matrix, bool row, int &r, int &c){
        int m=matrix.size(), n=matrix[0].size();
        if(row){
            for(int i=1;i<n;i++)
                matrix[r][i]=1;
        }
        else{
            for(int i=1;i<m;i++)
                matrix[i][c]=1;
        }
        
    }
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
                if(matrix[i][j])
                    matrix[i][0]=1, matrix[0][j]=1;
            }
        }
        for(int i=1;i<n;i++){
            if(matrix[0][i])
                transform(matrix, false, i, i);
            matrix[0][i]=row;
        }
        for(int i=1;i<m;i++){
            if(matrix[i][0])
                transform(matrix, true, i, i);
            matrix[i][0]=col;
        }
        if(row||col)
                matrix[0][0]=1;
    }
