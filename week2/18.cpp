vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
  {
        int tr=0, br=r-1, lc=0, rc=c-1;
        vector<int> result;
        while(true){
            for(int i=lc;i<=rc;i++)
                result.push_back(matrix[tr][i]);
            tr++;
            if(tr>br)   break;
          
            for(int i=tr;i<=br;i++)
                result.push_back(matrix[i][rc]);
            rc--;
            if(lc>rc)   break;
          
            for(int i=rc;i>=lc;i--)
                result.push_back(matrix[br][i]);
            br--;
            if(tr>br)   break;
          
            for(int i=br;i>=tr;i--)
                result.push_back(matrix[i][lc]);
            lc++;
            if(lc>rc)   break;
        }
        return result;
  }
