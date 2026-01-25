class Solution {
  public:
    vector<int> singleNum(vector<int>& arr) {
        
        // Code here.
        int n=arr.size();
        int xr=0;
        for(int i=0;i<n;i++)
        {
            xr=xr^arr[i];
        }
        int set=xr &(-xr);
        int a=0, b=0;
        for (int x:arr) 
        {
            if (x & set)
            {
                a^=x;
            }
            else
            {
                b^=x;
            }
        }

        if (a>b)
        {
            swap(a,b);
        }
        return {a,b};
    }
};
