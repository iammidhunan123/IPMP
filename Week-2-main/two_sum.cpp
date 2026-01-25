class Solution {
  public:
    bool twoSum(vector<int>& arr, int target) {
        // code here
        int i=0;
        int j=arr.size()-1;
        int sum=0;
        sort(arr.begin(),arr.end());
        while(i<j)
        {
            sum=arr[i]+arr[j];
            if(sum<target)
            {
                i++;

            }
            else if(sum>target)
            {
                j--;
            }
            else
            {
                return true;
            }
        }
        return false;
    }
};
