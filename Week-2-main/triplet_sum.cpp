class Solution {
  public:
    bool hasTripletSum(vector<int> &arr, int target) {
        // Code Here
        sort(arr.begin(),arr.end());
        for(int i=0;i<arr.size();i++)
        {
            int j=i+1;
            int k=arr.size()-1;
            while(j<k)
            {
                int sum=arr[i]+arr[j]+arr[k];
                if(sum<target)
                {
                    j++;
                }
                else if(sum>target)
                {
                    k--;
                }
                else
                {
                    return true;
                }
            }
        }
        return false;
    }
};
