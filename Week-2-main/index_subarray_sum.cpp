class Solution {
  public:
    vector<int> subarraySum(vector<int> &arr, int target) {
        // code here
        vector<int> ans;
        unordered_map<int,int> hash;
        int n=arr.size();
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=arr[i];
            if(sum==target)
            {
                ans.push_back(1);
                ans.push_back(i+1);
                return ans;
            }
            int rem=sum-target;
            if(hash.find(rem)!=hash.end())
            {
                ans.push_back(hash[rem]+2);
                ans.push_back(i+1);
                return ans;
            }
            if(hash.find(sum)==hash.end())
            {
                hash[sum]=i;
            }
            
        }
        return {-1};
        
    }
};
