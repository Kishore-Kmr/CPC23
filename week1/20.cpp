vector<int> downwardDiagonal(int N, vector<vector<int>> A)
{
		vector<int> result;
		for(int j=0;j<N;j++){
		    for(int r=0, c=j;r<N&&c>=0; r++, c--)
		        result.push_back(A[r][c]);
		}
		for(int i=1;i<N;i++){
		    for(int r=i, c=N-1;r<N&&c>=0;r++, c--)
		        result.push_back(A[r][c]);
		}   
		return result;
}
