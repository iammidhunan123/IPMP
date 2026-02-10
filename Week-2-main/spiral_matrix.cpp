class Solution {
  public:
    vector<int> spirallyTraverse(vector<vector<int>> &mat) {
        // code here
        int row=mat.size();
        int col=mat[0].size();
        int srow=0,erow=row-1;
        int scol=0,ecol=col-1;
        vector<int> spiral;
        while(srow<=erow && scol<=ecol)
        {
            for(int i=scol;i<=ecol;i++)
            {
                spiral.push_back(mat[srow][i]);
            }
            srow++;
            for(int i=srow;i<=erow;i++)
            {
                spiral.push_back(mat[i][ecol]);
            }
            ecol--;
            if(srow<=erow)
            {
                for(int i=ecol;i>=scol;i--)
                {
                    spiral.push_back(mat[erow][i]);
                }
                erow--;
            }
            if(scol<=ecol)
            {
                for(int i=erow;i>=srow;i--)
                {
                    spiral.push_back(mat[i][scol]);
                }
                scol++;
            }
        }
        return spiral;
    }
};
