class Solution {
  public:
    void booleanMatrix(vector<vector<int>>& mat) {
        // code here
       
        int row=mat.size();
        int col=mat[0].size();
        vector<bool> r(row,false);
        vector<bool> c(col,false);
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                if(mat[i][j]==1)
                {
                    r[i]=true;
                    c[j]=true;
                }
            }
        }
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                if(r[i] || c[j])
                {
                    mat[i][j]=true;
                }
            }
        }
    }
};
