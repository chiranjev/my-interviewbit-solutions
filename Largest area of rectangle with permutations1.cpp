int Solution::solve(vector<vector<int> > &A) {
//   https://www.geeksforgeeks.org/find-the-largest-rectangle-of-1s-with-swapping-of-columns-allowed/
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
        int count[row+1];
        memset(count,0,sizeof(count));
        for(int j=0;j<col;j++){
            count[mat[i][j]]++;
        }

        for(int j=1;j<=row;j++){
            count[j]+=count[j-1];
        }
        int output[col];
        for(int j=col-1;j>=0;j--){
            output[count[mat[i][j]]-1]=mat[i][j];
            count[mat[i][j]]--;
        }
        int index=0;
        for(int j=col-1;j>=0;j--){
            mat[i][index++]=output[j];
        }
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

// O(r*(r+c))
