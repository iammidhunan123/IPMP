class Solution {
  public:
    int findEquilibrium(vector<int> &arr) {
        // code here
        int n=arr.size();
        int sum=0;
        for(int x:arr)
        {
            sum+=x;
        }
        int left=0;
        for(int i=0;i<n;i++)
        {
            sum-=arr[i];
            if(left==sum)
            {
                return i;
            }
            left+=arr[i];
        }
        return -1;
    }
};
