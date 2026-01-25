class Solution {
  public:
    vector<int> getMinMax(vector<int> &arr) {
        // code here
        int n=arr.size();
        int min=arr[0];
        int max=arr[0];
        for(int i=1;i<n;i++)
        {
            if(min>arr[i])
            {
                min=arr[i];
            }
            if(max<arr[i])
            {
                max=arr[i];
            }
        }
        return {min,max};
    }
};
