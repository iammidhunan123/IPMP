class Solution {
  public:
    int missingNum(vector<int>& arr) {
        // code here
        int n=arr.size() + 1;
        int total= n*(n+1)/2;
        int sum=0;
        for (int x:arr) 
        {
            sum+= x;
        }
        return total-sum;
    }
};
