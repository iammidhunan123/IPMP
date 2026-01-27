// User function template for C++
class Solution {
  public:
    bool matSearch(vector<vector<int>> &mat, int x) {
        // your code here
        int row=mat.size();
        for(int i=0;i<row;i++)
        {
            int col=mat[i].size();
            int low=0;
            int high=col-1;
            while(low<=high)
            {
                int mid=(low+high)/2;
                if(mat[i][mid]==x)
                {
                    return true;
                }
                else if(mat[i][mid]<x)
                {
                    low=mid+1;
                }
                else
                {
                    high=mid-1;
                }
            }
        }
        return false;
    }
};
