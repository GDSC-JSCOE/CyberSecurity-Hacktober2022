class Solution {
    public int[][] matrixReshape(int[][] mat, int r, int c) {
        int m = mat.length;
        int n = mat[0].length;
        
        if(m==r || n==c) //if either the row or column value is same we have to return the original matrix
            return mat;
        
        if((r*c)!=(m*n)) //to check for the condition if it forms a valid matrix or not
            return mat;
        
        int retmat[][] = new int[r][c];
        
        int rowcount = 0, colcount = 0;
            
            for(int i=0;i<m;i++){
                for(int j=0;j<n;j++){
                    retmat[rowcount][colcount] = mat[i][j];
                   
                    if(colcount<c) //increment the column value for return matrix if it has not reached c value
                        colcount++;
                    if(colcount == c){ 
                        rowcount++;  //increment rowcount if the given column value has reached
                        colcount =0;
                    }
                }
                
            }
                 
        return retmat;
    }
}
