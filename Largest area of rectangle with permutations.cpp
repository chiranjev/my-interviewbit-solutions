int Solution::solve(vector<vector<int> > &A) {
//    https://www.geeksforgeeks.org/find-the-largest-rectangle-of-1s-with-swapping-of-columns-allowed/
    int row = A.size();
    int col = A[0].size();
    int mat[row][col];

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(i==0){
                mat[0][j]=A[0][j];
            }else{
                if(A[i][j]==1){
                    mat[i][j]=mat[i-1][j]+1;
                }else{
                    mat[i][j]=0;
                }
            }
        }
    }
    for(int i=0;i<row;i++){
        sort(mat[i],mat[i]+col,greater<int>());
    }
    int maxArea=0;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            int area = mat[i][j]*(j+1);
            if(area>maxArea){
                maxArea=area;
            }
        }
    }
    return maxArea;

}

// O(R*(ClogC))
